#include <iostream>
#include "Retangulo.hpp"


int main(){
    double novoLado;
    double novaBase;

    std::cout << "Valor dos lados: " << std::endl;
    std::cin >> novoLado;

    std::cout << "Valor das bases: " << std::endl;
    std::cin >> novaBase;
    
    Retangulo r{};

    std::cout << "Area do retangulo: " << r.calcularArea(r.getLados(), r.getBases()) << std::endl;
        

    std::cout << "Perimetro do retangulo: " << r.calcularPerimetro(r.getLados(), r.getBases()) << std::endl;


    Retangulo r2{novoLado, novaBase};

    std::cout << "Area do retangulo: " << r2.calcularArea(r2.getLados(), r2.getBases()) << std::endl;
        

    std::cout << "Perimetro do retangulo: " << r2.calcularPerimetro(r2.getLados(), r2.getBases()) << std::endl;


    return 0;
}
