#ifndef ALUNO_HPP
#define ALUNO_HPP

#include "Pessoa.hpp"

class Aluno : public Pessoa {
    public:
        using Pessoa::Pessoa;

        Aluno(const std::string &nome, const unsigned long cpf, 
            const std::string &curso, const unsigned int matricula);

        ~Aluno();

        const std::string& getCurso() const;
        void setCurso(const std::string& curso);

        unsigned int getMatricula() const;
        void setMatricula(const unsigned int matricula);
    
    private:
        std::string curso;
        unsigned int matricula;
};

#endif