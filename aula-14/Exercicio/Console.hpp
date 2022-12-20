#ifndef CONSOLE_HPP
#define CONSOLE_HPP

#include "Trajeto.hpp"

class Console{
	public:
		static void imprimirDadosTrajeto(const Trajeto& trajeto);

		virtual ~Console();
};
#endif
