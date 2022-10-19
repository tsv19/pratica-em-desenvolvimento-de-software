#include <iostream>
#include "Retangulo.hpp"


#define NUM_RETANGULOS 1


int main(){
    Retangulo r[NUM_RETANGULOS];
    
    for (int i{0}; i < NUM_RETANGULOS; i++){

        std::cout << "Valor dos lados: " << std::endl;
        std::cin >> r[i].lados;

        std::cout << "Valor das bases: " << std::endl;
        std::cin >> r[i].bases;
    }
    

    for (int i{0}; i < NUM_RETANGULOS; i++){
        std::cout << "Area do retangulo " << i+1 << ": " << r[i].calcularArea(r[i].lados, r[i].bases) << std::endl;
        

        std::cout << "Perimetro do retangulo " << i+1 << ": " << r[i].calcularPerimetro(r[i].lados, r[i].bases) << std::endl;
    }


    return 0;
}
