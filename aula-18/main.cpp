#include <iostream>
#include "CPF.hpp"
#include "Pessoa.hpp"

int main(){
    //abra um gerador de cpf e coloque
    //um cpf que começa com 0
    ufpr::CPF cpf1{11111111111};
    std::cout << cpf1 << '\n';

    std::cout << "Digite um cpf: ";
    std::cin >> cpf1;

    std::cout << "cpf1: " << cpf1 << '\n';
    std::cout << "cpf1[8]: " << cpf1[8] << '\n';

    std::cout << "cpf1(0, 3): " << cpf1(0, 3) << '\n';


    ufpr::Pessoa p1 {"Joao", cpf1};
    ufpr::Pessoa p2 {"Joao Marcos Oliveira", cpf1};

    if (p1 == p2){
        std::cout << "p1 e p2 sao iguais\n";
    }

    return 0;
}