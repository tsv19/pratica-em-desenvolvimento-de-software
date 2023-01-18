#include <iostream>
#include <stdexcept>

#include "Pessoa.hpp"
#include "CPFInvalidoException.hpp"

int main(){
   Pessoa *p{nullptr};
   std::string nome;
   unsigned long cpf;

   std::cout << "Digite o nome: ";
   std::cin >> nome;
   std::cout << "Digite a cpf: ";
   std::cin >> cpf;

   try{
       p = new Pessoa{nome};
       p->setCpf(cpf);
       std::cout << p->getNome() << " " << p->getCpf() << "\n";
   }catch(CPFInvalidoException& ex){
        std::cout << ex.what() << std::endl;
    //    if(ex == 1){
    //        std::cout << "CPF inválido\n";
    //    }else{
    //        std::cout << "Erro desconhecido\n";
    //    }
   }
   delete p;
   return 0;
}
