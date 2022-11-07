#include "Curso.hpp"


Curso::Curso() 
    :nomeCurso{""}, anoCriacao{0}, cargaHorariaMinima{0} {
}

Curso::Curso(std::string nomeCurso, unsigned long anoCriacao, unsigned long cargaHorariaMinima)
    :nomeCurso{nomeCurso}, anoCriacao{anoCriacao}, cargaHorariaMinima{cargaHorariaMinima} {
}

std::string Curso::getNomeCurso(){
    return this->nomeCurso;
}
void Curso::setNomeCurso(std::string nomeCurso){
    this->nomeCurso = nomeCurso;
}


unsigned long Curso::getAnoCriacao(){
    return this->anoCriacao;
}
void Curso::setAnoCriacao(unsigned long anoCriacao){
    this->anoCriacao = anoCriacao;
}


unsigned long Curso::getCargaHorariaMinima(){
    return this->cargaHorariaMinima;
}
void Curso::setCargaHorariaMinima(unsigned long cargaHorariaMinima){
    this->cargaHorariaMinima = cargaHorariaMinima;
}

