#include <stdio.h>


#define NUM_PESSOAS 3


typedef struct Pessoa Pessoa;


struct Pessoa {
    char nome[1024];
    unsigned long int cpf;
    int idade;
};


int validarCPF(unsigned long int cpf){
    unsigned long int cpfAux = cpf;
    
    int segundoD, primeiroD, soma, resto;


    // validacao do primeiro digito ============================================
    segundoD = cpfAux % 10;
    cpfAux /= 10;
    
    primeiroD = cpfAux % 10;
    cpfAux /= 10;

    soma = 0;
    for (int i = 2; i <= 10; i++){
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
    cpfAux = cpf / 10;

    soma = 0;
    for (int i = 2; i <= 11; i++){
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


int main(){
    Pessoa pessoa[NUM_PESSOAS];

    for (int i = 0; i < NUM_PESSOAS; i++){
        printf("nome: \n");
        scanf(" %s", pessoa[i].nome);
        
        printf("cpf: \n");
        scanf(" %ld", &pessoa[i].cpf);

        if ( !validarCPF(pessoa[i].cpf) ){ 
            printf("cpf invalido, entre com o dado correto\n");
            i--;
            continue;
        }

        printf("idade: \n");
        scanf(" %d", &pessoa[i].idade);

        printf("\n");
    }


    for (int i = 0; i < NUM_PESSOAS; i++){
        printf(
            "Pessoa: %s, cpf: %ld, idade: %d\n", 
            pessoa[i].nome,
            pessoa[i].cpf,
            pessoa[i].idade
        );
    }

    return 0;
}
