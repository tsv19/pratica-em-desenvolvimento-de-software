#include "CPF.hpp"

#include <iomanip>

#include "CPFInvalidoException.hpp"

namespace ufpr {

CPF::CPF(const unsigned long numero) { this->setNumero(numero); }

unsigned long CPF::getNumero() const { return this->numero; }

void CPF::setNumero(const unsigned long numero) {
    if (!validarCPF(numero)) throw CPFInvalidoException{numero};
    this->numero = numero;
}

bool CPF::validarCPF(unsigned long cpfTeste) const {
    int somatorioValidaUltimo;
    int modulo;
    int somatorioValidaPenultimo = 0;
    int ultimo = cpfTeste % 10;
    cpfTeste = cpfTeste / 10;
    int penultimo = cpfTeste % 10;
    cpfTeste = cpfTeste / 10;

    somatorioValidaUltimo = penultimo * 2;
    for (int i = 2; i <= 11; i++) {
        modulo = cpfTeste % 10;
        cpfTeste = cpfTeste / 10;
        somatorioValidaPenultimo += modulo * i;
        somatorioValidaUltimo += modulo * (i + 1);
    }
    modulo = somatorioValidaPenultimo % 11;
    if (modulo < 2) {
        if (!penultimo) return false;  // cpf invalido
    } else {
        if (penultimo != 11 - modulo) return false;  // cpf invalido
    }
    modulo = somatorioValidaUltimo % 11;
    if (modulo < 2) {
        if (!ultimo) return false;  // cpf invalido
    } else {
        if (ultimo != 11 - modulo) return false;  // cpf invalido
    }
    return true;  // cpf valido
}

bool CPF::operator==(const CPF& outro) const {
    return this->numero == outro.numero;
}

bool CPF::operator!=(const CPF& outro) const { return !(*this == outro); }

bool CPF::operator<(const CPF& outro) const {
    return this->numero < outro.numero;
}

bool CPF::operator>(const CPF& outro) const { return (outro < *this); }

bool CPF::operator<=(const CPF& outro) const { return !(*this > outro); }

bool CPF::operator>=(const CPF& outro) const { return !(*this < outro); }

const CPF& CPF::operator=(const CPF& outro) {
    if (&outro != this) {  // cuidado com auto atribuição
        this->numero = outro.numero;
    }
    return *this;  // para permitir x = y = z
}

const CPF& CPF::operator=(const unsigned long numero) {
    if (!validarCPF(numero)) throw CPFInvalidoException{numero};
    this->numero = numero;
    return *this;
}

std::ostream& operator<<(std::ostream& stream, const ufpr::CPF& cpf) {
    unsigned int verificador{(unsigned int)(cpf.numero % 100)};
    unsigned long prim{cpf.numero / 100};
    unsigned int ter{(unsigned int)(prim % 1000)};
    prim /= 1000;
    unsigned int seg{(unsigned int)(prim % 1000)};
    prim /= 1000;

	stream << std::setw(3) << std::setfill('0');
    stream << prim << '.' << seg << '.' << ter << '-' << verificador;
    return stream;  // permitir cout << a << b << c;
}

std::istream& operator>>(std::istream& stream, CPF& cpf) {
    unsigned long numero;
    std::string entrada;
    
    stream >> entrada;

    numero = 100000000 * std::stoul(entrada.substr(0, 3)) ;
    numero += 100000 * std::stoul(entrada.substr(4, 3));
    numero += 100 * std::stoul(entrada.substr(8, 3));
    numero += std::stoul(entrada.substr(12, 2));

    cpf.setNumero(numero);

    return stream;
}

unsigned short CPF::operator[](unsigned short posicao) const{
    if ( posicao > 10 ){
        throw std::out_of_range("Posição inválida");
    }

    unsigned long numero {this->numero};
    
    for(unsigned short i {0}; i < posicao; i++){
        numero = numero / 10;
    }

    return numero % 10;
}

unsigned long CPF::operator()(const int idx, const int qtd) const{
    if ( idx > 10 ){
        throw std::out_of_range("Posição inválida");
    }
    if ( qtd > 10 ){
        throw std::out_of_range("Quantidade inválida");
    }
    if ( idx + qtd > 10 ){
        throw std::out_of_range("Posição + quantidade inválida");
    }

    unsigned long numero {this->numero};
    int iFim {idx + qtd};
    int tiraFim {1};

    for(int i {0}; i < idx; i++){
        numero = numero / 10;
    }

    for (int i {0}; i < (11 - iFim); i++){
        tiraFim *= 10;
    }

    return numero / tiraFim;
}

}  // namespace ufpr







