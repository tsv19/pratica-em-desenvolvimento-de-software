#include "ProfessorEngenheiro.hpp"

#include <iostream>


ProfessorEngenheiro::ProfessorEngenheiro(const std::string& nome, const unsigned long cpf, const unsigned int valorHora, const unsigned short cargaHoraria, const unsigned int numeroCrea)
:Professor{nome, cpf, valorHora, cargaHoraria}, Engenheiro{numeroCrea}{
    std::cout << "Construtor de ProfessorEngenheiro" << std::endl;
} 
        
ProfessorEngenheiro::~ProfessorEngenheiro(){
    std::cout << "Destrutor de ProfessorEngenheiro" << std::endl;
}
