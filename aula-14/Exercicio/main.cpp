#include <iostream>

#include "Trajeto.hpp"
#include "TrajetoEuclidiano.hpp"
#include "TrajetoManhattan.hpp"
#include "Console.hpp"

int main(){
	std::cout << "Implemente: " << std::endl;

	TrajetoEuclidiano* trajeto {new TrajetoEuclidiano()};

	trajeto->adicionarPonto(0, 0);
	trajeto->adicionarPonto(1, 1);
	trajeto->adicionarPonto(2, 2);

	Console::imprimirDadosTrajeto(*trajeto);

	TrajetoManhattan* trajeto2 {new TrajetoManhattan()};
	trajeto2->adicionarPonto(0, 0);
	trajeto2->adicionarPonto(1, 1);
	trajeto2->adicionarPonto(2, 2);

	Console::imprimirDadosTrajeto(*trajeto2);

	return 0;
}
