#include "Aluno.hpp"


Aluno::Aluno(const std::string &nome, const unsigned long cpf, 
    const std::string &curso, const unsigned int matricula) 
    :Pessoa{nome, cpf}, curso{curso}, matricula{matricula} {
}

Aluno::~Aluno(){
}

const std::string& Aluno::getCurso() const {
    return this->curso;
}

void Aluno::setCurso(const std::string& curso){
    this->curso = curso;
}

unsigned int Aluno::getMatricula() const {
    return this->matricula;
}

void Aluno::setMatricula(const unsigned int matricula){
    if( matricula > 0 && matricula != this->matricula )
        this->matricula = matricula;
}
