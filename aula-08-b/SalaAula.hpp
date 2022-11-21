#ifndef SALA_AULA_H
#define SALA_AULA_H

#include "Disciplina.hpp"

#include <string>
#include <list>


class SalaAula{
    friend class Disciplina;

	public:
		SalaAula(std::string nome, unsigned int capacidade);
		
		std::string getNome();
		void setNome(std::string nome);

		unsigned int getCapacidade();
		void setCapcidade(unsigned int capacidade);
		
		void adicionarDisciplina(Disciplina *disciplina);
		void removerDisciplina(Disciplina *disciplina);
		std::list<Disciplina *>& getDisciplinas();

	private:
		std::string nome;
		unsigned int capacidade;
        std::list<Disciplina *> disciplinasMinistradas;
};
#endif
