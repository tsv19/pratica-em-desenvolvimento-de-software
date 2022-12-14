#ifndef __FILA_CIRCULAR_HPP__
#define __FILA_CIRCULAR_HPP__

#include <cstdlib>

template <typename T = int, std::size_t MAX_FILA = 10>
class FilaCircular {
    public:
        FilaCircular(): inicio{0}, fim{0}, quantidade{0}{
        }

        ~FilaCircular(){
        }

        bool estaVazia() const {
            return ( quantidade == 0 )? true : false;
        }

        bool estaCheia() const {
            return ( quantidade == MAX_FILA )? true : false;
        }

        bool enfileirar(const T valor) {
            if ( estaCheia() )
                return false;
            
            fila[fim] = valor;
            fim = (fim + 1) % MAX_FILA;
            ++quantidade;
            return true;
        }

        bool desenfileirar(T* const retorno) {
            if ( estaVazia() )
                return false;
            *retorno = fila[inicio];
            inicio = (inicio + 1) % MAX_FILA;
            --quantidade;
            return true;
        }

    private:
        size_t inicio;
        size_t fim;
        size_t quantidade;
        T fila[MAX_FILA];
};


#endif