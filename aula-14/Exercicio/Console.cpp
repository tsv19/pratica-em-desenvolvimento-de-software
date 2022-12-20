#include "Console.hpp"

#include<iostream>

void Console::imprimirDadosTrajeto(const Trajeto& trajeto){
        std::cout << "Trajeto: " << std::endl;
	trajeto.imprimirTrajeto();
	std::cout << "Distancia percorrida: " << trajeto.getDistanciaPercorrida() << std::endl;
}

Console::~Console(){}
