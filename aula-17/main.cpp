#include <iostream>

#include "Disciplina.hpp"
#include "EnumTipoDisciplina.hpp"
#include "Pessoa.hpp"
#include "CargaHorariaInvalidaException.hpp"

using namespace ufpr;

int main(){
    Disciplina d1{"Programacao", nullptr, EnumTipoDisciplina::OPTATIVA};
    Disciplina d2{"Orientacao a objetos", nullptr, EnumTipoDisciplina::MANDATORIA};
    
    try {
        d1.setCargaHoraria(30);
    }
    catch (CargaHorariaInvalidaException& e) {
        std::cout << d1.getNome() << '\n';
        std::cout << e.what() << '\n';
    }

    try {
        d2.setCargaHoraria(15);
    }
    catch (CargaHorariaInvalidaException& e) {
        std::cout << e.what() << " para a disciplina " << d2.getNome() << '\n';
    }



    return 0;
}