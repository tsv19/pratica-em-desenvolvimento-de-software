#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>

    class Pessoa {
        public: 
            Pessoa(std::string nomePessoa);

            Pessoa(std::string nomePessoa, unsigned short idadePessoa, unsigned long cpfPessoa);

            bool validarCpf(unsigned long cpfTeste);
            
            unsigned long getCpf();
            void setCpf(unsigned long novoCpf);

            std::string getNome();
            void setNome(std::string novoNome);

            unsigned short getIdade();
            void setIdade(unsigned short novaIdade);


        private:
            std::string nome;
            unsigned long cpf;
            unsigned char idade; 
    };

#endif
