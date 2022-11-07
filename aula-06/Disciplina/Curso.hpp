#ifndef CURSO_H
#define CURSO_H

#include <string>

class Curso{
    public:
        Curso();
        Curso(std::string nomeCurso, unsigned long anoCriacao, unsigned long cargaHorariaMinima);

        std::string getNomeCurso();
        void setNomeCurso(std::string nomeCurso);

        unsigned long getAnoCriacao();
        void setAnoCriacao(unsigned long anoCriacao);

        unsigned long getCargaHorariaMinima();
        void setCargaHorariaMinima(unsigned long cargaHorariaMinima);

    private:
        std::string nomeCurso;
        unsigned long anoCriacao;
        unsigned long cargaHorariaMinima;
};

#endif
