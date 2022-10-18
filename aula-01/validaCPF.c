#include <stdio.h>


typedef struct Pessoa Pessoa;


struct Pessoa {
    char nome[1024];
    unsigned long int cpf;
    int idade;
};



int validaCPF(unsigned long int cpf){
    
    unsigned long int cpfAux;
    
    // validacao do primeiro digito

    int segundoD = cpfAux % 10;
    cpfAux /= 10;
    int primeiroD = cpfAux % 10;
    cpfAux /= 10;

    int soma = 0;
    for (int i = 10; i > 0; i++){
        soma += (cpfAux % 10) * i;
        cpfAux /= 10;
    }

    int resto = (soma * 10) % 11;


    if (resto != primeiroD) return 0;

    // validacao do segundo digito

    cpfAux = cpf / 10;

    soma = 0;
    for (int i = 11; i > 1; i++){
        soma += (cpfAux % 10) * i;
        cpfAux /= 10;
    }

    resto = (soma * 10) % 11;

    
    return (resto == segundoD) ? 1 : 0;
}


int main(){

    Pessoa pessoa[3];

    for (int i = 0; i < 3; i++){
        printf("nome: \n");
        scanf(" %s", &pessoa[i].nome);
        
        printf("cpf: ");
        scanf(" %ld", &pessoa[i].cpf);

        // printf("idade: \n"); dd
        //scanf(" %d", &pessoa[i].idade);

        pessoa[i].idade = i * 10;

        printf("cpf entrado: %ld\n\n", pessoa[i].cpf);
    }

    for (int i = 0; i < 3; i++){
        printf("Pessoa: %s\n", pessoa[i].nome);

        if (validaCPF(pessoa[i].cpf)) printf("cpf valido\n");
        else printf("cpf invalido\n");

        printf("\n");
    }

    return 0;
}
