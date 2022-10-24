#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>

    class Pessoa {
        public: 
            bool validarCpf(unsigned long cpfTeste);
            
            unsigned long getCpf();
            void setCpf(unsigned long novoCpf);

            std::string getNome();
            void setNome(std::string novoNome);

            unsigned short getIdade();
            void setIdade(unsigned short novaIdade);


        private:
            unsigned long cpf;
            std::string nome;
            unsigned char idade; 
    };

#endif
