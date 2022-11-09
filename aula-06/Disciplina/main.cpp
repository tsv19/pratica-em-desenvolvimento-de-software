#include <iostream>

#include <string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main(){
	Pessoa *p1{new Pessoa{"Joao", 11111111111, 20}};
	// Pessoa *p2{new Pessoa{"Maria"}};
	// Pessoa *p3{new Pessoa{"Joao", 22222222222, 12}};
	// Pessoa *p4{new Pessoa{"Tikara", 33333333333, 30}};

    Curso c1{"Ciencia da Computacao", 2000, 4000};

    Disciplina *d1{new Disciplina{"Orientacxao a Objetos", p1, c1}};

    d1->setCargaHoraria(60);

    // p1->setNome("Jonas");

    // std::cout << "Disciplina: " << d1->getNome() << "\t Nome professor:" << d1->getNomeProfessor() << std::endl;

    // d1->adicionarAluno(p2);
    // d1->adicionarAluno(p3);
    // d1->adicionarAluno(p4);

    // Pessoa **vetAlunos{d1->getVetorAlunos()};

    // for (int i = 0; i < d1->getQuantidadeAlunos(); i++){
    //     std::cout << "Nome aluno: " << vetAlunos[i]->getNome() << std::endl;
    // }
    
    // std::cout << std::endl;


    std::string cabecalho{"Dados da disciplina:"};

    d1->imprimirDados(cabecalho);


    return 0;
}
