#include <iostream>
#include "Retangulo.hpp"


#define NUM_RETANGULOS 1


int main(){
    Retangulo r[NUM_RETANGULOS];
    
    double novoLado;
    double novaBase;

    for (int i{0}; i < NUM_RETANGULOS; i++){

        std::cout << "Valor dos lados: " << std::endl;
        std::cin >> novoLado;
        r[i].setLados(novoLado);

        std::cout << "Valor das bases: " << std::endl;
        std::cin >> novaBase;
        r[i].setBases(novaBase);
    }
    

    for (int i{0}; i < NUM_RETANGULOS; i++){
        std::cout << "Area do retangulo " << i+1 << ": " << r[i].calcularArea(r[i].getLados(), r[i].getBases()) << std::endl;
        

        std::cout << "Perimetro do retangulo " << i+1 << ": " << r[i].calcularPerimetro(r[i].getLados(), r[i].getBases()) << std::endl;
    }


    return 0;
}
