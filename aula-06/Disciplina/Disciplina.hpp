#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include "Pessoa.hpp"

class Disciplina{
	public:
		Disciplina(std::string nomeDisciplina);
		Disciplina(std::string nomeDisciplina, Pessoa *novoProfessor);

		std::string getNome();
		void setNome(std::string nome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int cargaHoraria);
		
        Pessoa *getProfessor();
        void setProfessor(Pessoa *professor);
        std::string getNomeProfessor();

        bool adicionarAluno(Pessoa *aluno);
        Pessoa **getVetorAlunos();
        int getQuantidadeAlunos();

        bool removerAluno(Pessoa *aluno);
        bool removerAluno(unsigned long cpfAluno);

        void imprimirDados(std::string &cabecalho, unsigned int &cargaHorariaCurso);

	private:
		std::string nome;
		unsigned int cargaHoraria;    
        Pessoa *professor;
        Pessoa *alunos[50];
        int contAlunos = 0;
};
#endif
