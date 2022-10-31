#include<iostream>

#include<string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main(){
	Pessoa p1{"Joao", 11111111111, 20};
	Pessoa p2{"Maria"};

    Disciplina *d1{new Disciplina{"Orientacao a Objetos", &p1}};

    p1.setNome("Jonas");

	// std::cout << p1.getNome() << '\t' << p1.getIdade() << '\t' <<  p1.getCpf() << '\n';
	//std::cout << p2.getNome() << '\n';

	// std::cout << d1.getNome() << '\n';

    // std::cout << d1.getNome() << '\t' 
            // << d1.getProfessor()->getNome() << '\n';

    
    //Pessoa *ptr1{new Pessoa};    
    //Pessoa *ptr2{new Pessoa{"Joana", 11111111111, 22}};

    //int * ptrInt{new int};
    //int * ptrIntIniciado{new int{2}};

    //ptr1->setNome("Maria");

    //*ptrInt = 20;
    
    //std::cout << ptr1->getNome() << '\n';
    //std::cout << ptr2->getNome() << '\n';
    //std::cout << *ptrInt << '\n';
    //std::cout << *ptrIntIniciado << '\n';

    //int * array{new int[10]};

    //for (int i = 0; i < 10; i++){
    //    array[i] = i;
    //    std::cout << array[i] << '\n';
    //}

    //delete ptr1;
    //delete ptr2;
    //delete ptrInt;
    //delete[] array;
    
    std::cout << "Disciplina: " << d1->getNome() << "\t Nome professor:" << d1->getNomeProfessor() << std::endl;


    d1->adicionarAluno(&p2);

    Pessoa **vetAlunos{d1->getVetorAlunos()};

    for (int i = 0; i < d1->getQuantidadeAlunos(); i++){
        std::cout << "Nome aluno: " << vetAlunos[i]->getNome() << std::endl;
    }
    
    return 0;
}
