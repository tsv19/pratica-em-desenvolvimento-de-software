#include <iostream>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "ConteudoMinistrado.hpp"
#include "Console.hpp"

int main(){
    Pessoa prof1{"João", 11111111111, 40};
    Disciplina dis1{"C++", nullptr};
    dis1.setProfessor(&prof1);

    dis1.adicionarConteudoMinistrado("Ponteiros", 4);
    dis1.adicionarConteudoMinistrado("Referencias", 2);
    dis1.adicionarConteudoMinistrado("UML", 4);
    dis1.adicionarConteudoMinistrado("Diagramas de classe", 7);
    dis1.adicionarConteudoMinistrado("Jogo do Brasil", 5);
    dis1.adicionarConteudoMinistrado("Ingles", 8);
    dis1.adicionarConteudoMinistrado("Alemao", 4);

    Console::imprimirDadosDisciplina(dis1);

    std::cout << "=============" << std::endl;

    dis1.removerConteudoMinistrado(0);
    dis1.removerConteudoMinistrado(1);
    dis1.removerConteudoMinistrado(2);
    dis1.removerConteudoMinistrado(3);
    dis1.removerConteudoMinistrado(4);

    Console::imprimirDadosDisciplina(dis1);

    dis1.limparConteudosMinistrados();

    return 0;
}