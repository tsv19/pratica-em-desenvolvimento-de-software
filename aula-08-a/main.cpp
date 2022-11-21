#include <iostream>
#include <string>
#include <list>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "SalaAula.hpp"


int main(){
	Pessoa prof1{"João", 11111111111, 40};
	Disciplina dis1{"Orientacao a Objetos"};
	dis1.setProfessor(&prof1);

	Pessoa prof2{"Maria", 22222222222, 30};	
	Disciplina dis2{"Sistemas Operacionais"};
	dis2.setProfessor(&prof2);

	SalaAula sala{"Lab Info 1", 20};

	std::cout << "Testando por disciplina" << std::endl;

	dis1.setSalaAula(&sala);
	dis2.setSalaAula(&sala);

	std::list<Disciplina*> &disciplinas = sala.getDisciplinas();

	for ( std::list<Disciplina*>::iterator it = disciplinas.begin(); it != disciplinas.end(); ++it ){
		std::cout << (*it)->getNome() << std::endl;
	}

	return 0;
}
