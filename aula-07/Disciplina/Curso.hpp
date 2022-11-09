#ifndef CURSO_H
#define CURSO_H

#include <string>

class Curso{
    public:
        Curso();
        Curso(std::string nomeCurso, unsigned int anoCriacao, unsigned int cargaHorariaMinima);

        std::string getNomeCurso();
        void setNomeCurso(std::string nomeCurso);

        unsigned int getAnoCriacao();
        void setAnoCriacao(unsigned int anoCriacao);

        unsigned int getCargaHorariaMinima();
        void setCargaHorariaMinima(unsigned int cargaHorariaMinima);

    private:
        std::string nomeCurso;
        unsigned int anoCriacao;
        unsigned int cargaHorariaMinima;
};

#endif
