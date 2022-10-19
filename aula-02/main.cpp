#include <iostream>
#include "Pessoa.hpp"


#define NUM_PESSOAS 3


int main(){
    Pessoa p[NUM_PESSOAS];
    
    int idade;

    for ( int i{0}; i < NUM_PESSOAS; i++){
        std::cout << "Nome: " << std::endl;
        std::cin >> p[i].nome;

        std::cout << "Idade: " << std::endl;
        std::cin >> idade;
        p[i].idade = idade;

        std::cout << "CPF: " << std::endl;
        std::cin >> p[i].cpf;


        if ( p[i].validarCPF(p[i].cpf) ) 
            std::cout << "CPF valido" << std::endl;
        else
            std::cout << "CPF invalido" << std::endl;

    }

    return 0;
}
