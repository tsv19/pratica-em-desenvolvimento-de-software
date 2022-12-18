#include <iostream>

#include "ProfessorAdjunto.hpp"
#include "Professor.hpp"
#include "Aluno.hpp" 
#include "Disciplina.hpp" 

int main(){
    ProfessorAdjunto p{"Joao", 11111111111, 8500, 40};

    Professor* ptr{&p};

    std::cout << p.getNome() << " " << p.getSalario() << std::endl;
    std::cout << ptr->getNome() << " " << ptr->getSalario() << std::endl;

    Aluno a{"Maria", 22222222222, "Engenharia de Software", 123456};
    Disciplina d{"Programacao Orientada a Objetos"};

    d.adicionarAluno(&a);


    std::list<Aluno*> lista_alunos = d.getAlunos();

    std::list<Aluno*>::const_iterator it = lista_alunos.begin();
    
    for (; it != lista_alunos.end(); it++){
        std::cout << (*it)->getNome() << std::endl; 
    } 

    return 0;
}
