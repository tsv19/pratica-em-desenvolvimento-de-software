#include "Retangulo.hpp"


Retangulo::Retangulo()
    :lados{0}, bases{0}{
}


Retangulo::Retangulo(double novoL = 0, double novoB = 0)
    :lados{novoL}, bases{novoB}{
}


void Retangulo::setLados(double novoL){
    lados = novoL;
}
double Retangulo::getLados(){
    return lados;
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

