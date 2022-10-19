#include "Pessoa.hpp"


bool Pessoa::validarCPF(unsigned long cpfTeste){
    unsigned long int cpfAux{cpfTeste};
    
    int segundoD{0}, primeiroD{0}, soma{0}, resto{0};


    // validacao do primeiro digito ============================================
    segundoD = cpfAux % 10;
    cpfAux /= 10;
    
    primeiroD = cpfAux % 10;
    cpfAux /= 10;

    soma = 0;
    for (int i{2}; i <= 10; i++){
        soma += ( cpfAux % 10 ) * i;
        cpfAux /= 10;
    }

    resto = soma % 11;

    if ( resto < 2 ){
        if ( primeiroD != 0 ) 
            return 0;
    }
    else {
        if ( primeiroD != 11 - resto )
            return 0;
    }


    // validacao do segundo digito =============================================
    cpfAux = cpfTeste / 10;

    soma = 0;
    for (int i{2}; i <= 11; i++){
        soma += (cpfAux % 10) * i;
        cpfAux /= 10;
    }

    resto = soma % 11;

    if ( resto < 2 ){
        if ( segundoD != 0 ) 
            return 0;
    }
    else {
        if ( segundoD != 11 - resto )
            return 0;
    }

    return 1;
}


