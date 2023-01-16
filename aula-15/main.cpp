#include <iostream>

#include "ProfessorEngenheiro.hpp"
#include "Professor.hpp"

int main(){
	ProfessorEngenheiro pe{"Maria", 11111111111, 100, 40, 1234};
	
	std::cout << pe.getNome() << std::endl;

	return 0;
}
