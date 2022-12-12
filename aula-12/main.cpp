#include <iostream>

#include "Pilha.hpp"
#include "Pessoa.hpp"

int main(){
	int retorno;
    Pilha<> p;
	p.push(1);
	p.push(2);
	p.push(3);
	p.push(4);
	p.push(5);
	p.push(6);

	while(!p.estaVazia()){
		p.pop(&retorno);
		std::cout << retorno << "\n";
	}
	

    Pessoa retorno2;
    Pilha<Pessoa, 5> p2;
    Pessoa pe1{"joao", 11111111111, 40};
    Pessoa pe2{"maria", 22222222222, 40};

    p2.push(pe1);
    p2.push(pe2);


	while(!p2.estaVazia()){
		p2.pop(&retorno2);
		std::cout << retorno2.getNome() << "\n";
	}

	std::cout << "Fim\n";

	return 0;
}
