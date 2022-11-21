#include <iostream>
#include <string>
#include <list>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "SalaAula.hpp"


int main(){
	SalaAula sala{"Lab Info 1", 20};
	SalaAula sala2{"Lab Info 2", 40};
	Disciplina dis1{"Orientacao a Objetos", &sala};
	Disciplina dis2{"Sistemas Operacionais", &sala};
	dis1.setSalaAula(&sala2); //isso deve ser possível
	sala2.adicionarDisciplina(&dis2); // isso também


	std::cout << "Disciplinas da sala" << std::endl; 
	for (auto& dis : sala2.getDisciplinas()){
		std::cout << "\t" << dis->getNome() << std::endl;
	}

	std::cout << std::endl; 
	std::cout << "Sala da disciplina" << std::endl; 
	std::cout << "\t" << dis1.getSalaAula()->getNome() << std::endl; 


	dis1.setSalaAula(&sala); 
	// sala2.adicionarDisciplina(&dis1);
	std::cout << std::endl; 
	std::cout << "Disciplinas da sala" << std::endl; 
	for (auto& dis : sala2.getDisciplinas()){
		std::cout << "\t" << dis->getNome() << std::endl;
	}

	std::cout << std::endl; 
	std::cout << "Sala da disciplina" << std::endl; 
	std::cout << "\t" << dis1.getSalaAula()->getNome() << std::endl; 

	return 0;
}
