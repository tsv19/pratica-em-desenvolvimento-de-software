#include "Engenheiro.hpp"
#include <iostream>


Engenheiro::Engenheiro(){
	std::cout << "Construtor de Engenheiro" << std::endl;
};

Engenheiro::Engenheiro(const unsigned int numeroCrea) : numeroCrea(numeroCrea){
	std::cout << "Construtor de Engenheiro numero crea" << std::endl;
}

Engenheiro::~Engenheiro(){
	std::cout << "Destrutor de Engenheiro" << std::endl;
}

unsigned int Engenheiro::getNumeroCrea() const{
	return this->numeroCrea;
}

void Engenheiro::setNumeroCrea(const unsigned int numeroCrea){
	this->numeroCrea = numeroCrea;
}

unsigned int Engenheiro::getSalario() const {
	return Engenheiro::salarioPadrao;
}