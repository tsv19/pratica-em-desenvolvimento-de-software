#include "Disciplina.hpp"

#include <iostream>

Disciplina::Disciplina(std::string nomeDisciplina)
	:nome{nomeDisciplina} {
}

Disciplina::Disciplina(std::string nomeDisciplina, Pessoa *novoProfessor)
	:nome{nomeDisciplina}, professor{novoProfessor} {
}

std::string Disciplina::getNome(){
	return this->nome;
}

void Disciplina::setNome(std::string nome){
	this->nome = nome;
}

int Disciplina::getCargaHoraria(){
	return this->cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned int cargaHoraria){
	this->cargaHoraria = cargaHoraria;
}


Pessoa *Disciplina::getProfessor(){
    return this->professor;
}

void Disciplina::setProfessor(Pessoa *professor){
    this->professor = professor;
}

std::string Disciplina::getNomeProfessor(){
    return this->professor->getNome();
}

bool Disciplina::adicionarAluno(Pessoa * aluno){
    if ( this->contAlunos < 50 ){ 
        this->alunos[contAlunos] = aluno;
        this->contAlunos++;
        return true;
    }
    return false;
}

Pessoa **Disciplina::getVetorAlunos(){
    return &this->alunos[0];
}

int Disciplina::getQuantidadeAlunos(){
    return this->contAlunos;
}

bool Disciplina::removerAluno(Pessoa *aluno){
    for (int i = 0; i < this->contAlunos; i++){
        if ( this->alunos[i] == aluno ){
            delete this->alunos[i];

            for (int j = i; j < this->contAlunos - 1; j++){
                this->alunos[j] = this->alunos[j+1];
            }

            this->alunos[contAlunos - 1] = nullptr;

            this->contAlunos--;
            return true;
        }
    }
    return false;
}


bool Disciplina::removerAluno(unsigned long cpfAluno){
    for (int i = 0; i < this->contAlunos; i++){
            if ( this->alunos[i]->getCpf() == cpfAluno ){
            delete this->alunos[i];

            for (int j = i; j < this->contAlunos - 1; j++){
                this->alunos[j] = this->alunos[j+1];
            }

            this->alunos[contAlunos - 1] = nullptr;

            this->contAlunos--;
            return true;
        }
    }
    return false;
}


void Disciplina::imprimirDados(std::string &cabecalho, unsigned int &cargaHorariaCurso){

    std::cout << cabecalho << std::endl;

    std::cout << "Disciplina: " << this->nome << std::endl;

    std::cout << "Porcentagem: " << this->cargaHoraria / (double)cargaHorariaCurso * 100 << "\% do curso" << std::endl;

    std::cout << "Professor: " << this->professor->getNome() << std::endl;


}





