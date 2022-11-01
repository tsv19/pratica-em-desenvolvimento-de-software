#include "Disciplina.hpp"

Disciplina::Disciplina(std::string nomeDisciplina)
	:nome{nomeDisciplina} {
}

Disciplina::Disciplina(std::string nomeDisciplina, Pessoa *novoProfessor)
	:nome{nomeDisciplina}, professor{novoProfessor} {
}

std::string Disciplina::getNome(){
	return nome;
}

void Disciplina::setNome(std::string novoNome){
	nome = novoNome;
}

int Disciplina::getCargaHoraria(){
	return cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned int novaCarga){
	cargaHoraria = novaCarga;
}


Pessoa *Disciplina::getProfessor(){
    return professor;
}

void Disciplina::setProfessor(Pessoa *novoProfessor){
    professor = novoProfessor;
}

std::string Disciplina::getNomeProfessor(){
    return professor->getNome();
}

bool Disciplina::adicionarAluno(Pessoa * novoAluno){
    if ( contAlunos < 50 ){ 
        alunos[contAlunos] = novoAluno;
        contAlunos++;
        return true;
    }
    return false;
}

Pessoa **Disciplina::getVetorAlunos(){
    return &alunos[0];
}

int Disciplina::getQuantidadeAlunos(){
    return contAlunos;
}

bool Disciplina::removerAluno(Pessoa *aluno){
    for (int i = 0; i < contAlunos; i++){
        if ( alunos[i] == aluno ){
            delete alunos[i];

            for (int j = i; j < contAlunos - 1; j++){
                alunos[j] = alunos[j+1];
            }

            alunos[contAlunos - 1] = nullptr;

            contAlunos--;
            return true;
        }
    }
    return false;
}


bool Disciplina::removerAluno(unsigned long cpfAluno){
    for (int i = 0; i < contAlunos; i++){
            if ( alunos[i]->getCpf() == cpfAluno ){
            delete alunos[i];

            for (int j = i; j < contAlunos - 1; j++){
                alunos[j] = alunos[j+1];
            }

            alunos[contAlunos - 1] = nullptr;

            contAlunos--;
            return true;
        }
    }
    return false;
}



