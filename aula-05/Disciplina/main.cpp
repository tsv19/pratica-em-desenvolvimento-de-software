#include<iostream>

#include<string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main(){
	Pessoa *p1{new Pessoa{"Joao", 11111111111, 20}};
	Pessoa *p2{new Pessoa{"Maria"}};
	Pessoa *p3{new Pessoa{"Joao", 22222222222, 12}};
	Pessoa *p4{new Pessoa{"Tikara", 33333333333, 30}};

    Disciplina *d1{new Disciplina{"Orientacao a Objetos", p1}};

    p1->setNome("Jonas");

    std::cout << "Disciplina: " << d1->getNome() << "\t Nome professor:" << d1->getNomeProfessor() << std::endl;

    d1->adicionarAluno(p2);
    d1->adicionarAluno(p3);
    d1->adicionarAluno(p4);

    Pessoa **vetAlunos{d1->getVetorAlunos()};

    for (int i = 0; i < d1->getQuantidadeAlunos(); i++){
        std::cout << "Nome aluno: " << vetAlunos[i]->getNome() << std::endl;
    }
    
    std::cout << std::endl;

    if ( d1->removerAluno(p3) ){
        std::cout << "Removeu" << std::endl;
    }

    std::cout << std::endl;

    if ( d1->removerAluno(33333333333) ){
        std::cout << "Removeu" << std::endl;
    }
    else {
        std::cout << "Nao Removeu" << std::endl;
    }


    std::cout << std::endl;

    if ( d1->removerAluno(p4) ){
        std::cout << "Removeu" << std::endl;
    }
    else {
        std::cout << "Nao Removeu" << std::endl;
    }

    std::cout << std::endl;

    if ( d1->removerAluno(p2) ){
        std::cout << "Removeu" << std::endl;
    }
    else {
        std::cout << "Nao Removeu" << std::endl;
    }

    return 0;
}
