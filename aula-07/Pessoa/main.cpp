#include <iostream>
#include "Pessoa.hpp"


#define NUM_PESSOAS 1


int main(){
    std::string novoNome;

    unsigned long novoCpf;

    unsigned short int novaIdade;

    for ( int i{0}; i < NUM_PESSOAS; i++){
        std::cout << "Nome: " << std::endl;
        std::cin >> novoNome;

        std::cout << "Idade: " << std::endl;
        std::cin >> novaIdade;

        std::cout << "CPF: " << std::endl;
        std::cin >> novoCpf;
    }

    Pessoa p1{novoNome, novaIdade, novoCpf};

    p1.setCpf(novoCpf); 

    std::cout << "nome: " << p1.getNome() << std::endl;
    std::cout << "idade: " << p1.getIdade() << std::endl;
    std::cout << "cpf: " << p1.getCpf() << std::endl;


    return 0;
}
