#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include "Pessoa.hpp"
#include "Curso.hpp"

class Disciplina{
	public:
		Disciplina(std::string nomeDisciplina, Curso &curso);
		Disciplina(std::string nomeDisciplina, Pessoa *novoProfessor, Curso &curso);

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
        bool removerAluno(unsigned long cpf);

        void imprimirDados(std::string &cabecalho);

        std::string getNomeCurso();
        void setNomeCurso(std::string nomeCurso);

        unsigned int getAnoCriacaoCurso();
        void setAnoCriacaoCurso(unsigned int anoCriacao);

        unsigned int getCargaHorariaMinimaCurso();
        void setCargaHorariaMinimaCurso(unsigned int cargaHorariaMinima);

	private:
		std::string nome;
		unsigned int cargaHoraria;    
        Pessoa *professor;
        Pessoa *alunos[50];
        int contAlunos = 0;
        Curso &curso;
};
#endif
