#include "Curso.hpp"


Curso::Curso() 
    :nomeCurso{""}, anoCriacao{0}, cargaHorariaMinima{0} {
}

Curso::Curso(std::string nomeCurso, unsigned int anoCriacao, unsigned int cargaHorariaMinima)
    :nomeCurso{nomeCurso}, anoCriacao{anoCriacao}, cargaHorariaMinima{cargaHorariaMinima} {
}

std::string Curso::getNomeCurso(){
    return this->nomeCurso;
}
void Curso::setNomeCurso(std::string nomeCurso){
    this->nomeCurso = nomeCurso;
}


unsigned int Curso::getAnoCriacao(){
    return this->anoCriacao;
}
void Curso::setAnoCriacao(unsigned int anoCriacao){
    this->anoCriacao = anoCriacao;
}


unsigned int Curso::getCargaHorariaMinima(){
    return this->cargaHorariaMinima;
}
void Curso::setCargaHorariaMinima(unsigned int cargaHorariaMinima){
    this->cargaHorariaMinima = cargaHorariaMinima;
}

