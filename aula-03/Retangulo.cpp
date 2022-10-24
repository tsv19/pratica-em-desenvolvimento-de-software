#include "Retangulo.hpp"


void Retangulo::setLados(double novoL){
    lados = novoL;
}
double Retangulo::getLados(){
    return bases;
}

void Retangulo::setBases(double novoB){
    bases = novoB;
}
double Retangulo::getBases(){
    return bases;
}


 double Retangulo::calcularArea(double lado, double base){
    return lado * base; 
}


 double Retangulo::calcularPerimetro(double lado, double base){
    return lado * 2.0 + base * 2.0;
}            

