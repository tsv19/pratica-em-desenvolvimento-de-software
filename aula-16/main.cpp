#include <iostream>
#include <stdexcept>

#include "Pessoa.hpp"
#include "CPFInvalidoException.hpp"
#include "Disciplina.hpp"
#include "CargaHorariaInvalidaException.hpp"

int main(){
    Pessoa *p{nullptr};
    std::string nome;
    unsigned long cpf;
    unsigned short int idade;

    std::cout << "Digite o nome: ";
    std::cin >> nome;
    std::cout << "Digite o cpf: ";
    std::cin >> cpf;
    std::cout << "Digite a idade: ";
    std::cin >> idade;

    try {
        p = new Pessoa{nome, cpf, idade};
        std::cout << p->getNome() << " " << p->getCpf() << " " << p->getIdade()
                << std::endl;
    } catch (std::invalid_argument &iv) {
        std::cout << "Argumento invalido: " << iv.what() << std::endl;
    } catch (CPFInvalidoException &cpfe) {
        std::cout << "Erro de CPF: " << cpfe.what() << cpfe.cpf << std::endl;
    } catch (std::exception &ex) {
        std::cout << "Erro Generico: " << ex.what() << std::endl;
    }

    delete p;

    Disciplina d{"Programacao"};

    try {
        d.setCargaHoraria(-20);
    } catch (CargaHorariaInvalidaException &chi) {
        std::cout << "Carga Horaria: " << chi.what() << std::endl;
    } catch (std::exception &ex) {
        std::cout << "Erro Generico: " << ex.what() << std::endl;
    }

    return 0;
}
