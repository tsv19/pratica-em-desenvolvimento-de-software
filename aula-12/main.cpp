#include <iostream>

#include "FilaCircular.hpp"
#include "Pessoa.hpp"

int main(){
	int retorno;
    FilaCircular<int, 5> fila;
	fila.enfileirar(1);
	fila.enfileirar(2);
	fila.enfileirar(3);
	fila.enfileirar(4);
	fila.enfileirar(5);
	fila.enfileirar(0);
    fila.desenfileirar(&retorno);
	fila.enfileirar(6);
    fila.desenfileirar(&retorno);
	fila.enfileirar(7);
    fila.desenfileirar(&retorno);
	fila.enfileirar(8);
    fila.desenfileirar(&retorno);
	fila.enfileirar(9);
    fila.desenfileirar(&retorno);
	fila.enfileirar(10);


	while(!fila.estaVazia()){
		fila.desenfileirar(&retorno);
		std::cout << retorno << "\n";
	}
	

    Pessoa retorno2;
    FilaCircular<Pessoa, 5> fila2;
    Pessoa pe1{"joao", 11111111111, 40};
    Pessoa pe2{"maria", 22222222222, 40};

    fila2.enfileirar(pe1);
    fila2.enfileirar(pe2);


	while(!fila2.estaVazia()){
		fila2.desenfileirar(&retorno2);
		std::cout << retorno2.getNome() << "\n";
	}

	std::cout << "Fim\n";

	return 0;
}
