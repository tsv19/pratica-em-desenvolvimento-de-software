#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include "Pessoa.hpp"

class Disciplina{
	public:
		Disciplina(std::string nomeDisciplina);
		Disciplina(std::string nomeDisciplina, Pessoa *novoProfessor);

		std::string getNome();
		void setNome(std::string novoNome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int novaCarga);
		
        Pessoa *getProfessor();
        void setProfessor(Pessoa *novoProfessor);
        std::string getNomeProfessor();

        bool adicionarAluno(Pessoa *novoAluno);
        Pessoa **getVetorAlunos();
        int getQuantidadeAlunos();


	private:
		std::string nome;
		unsigned short int cargaHoraria;    
        Pessoa *professor;
        Pessoa *alunos[50];
        int contAlunos = 0;
};
#endif
