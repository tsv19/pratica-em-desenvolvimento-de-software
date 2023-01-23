#ifndef CARGA_HORARIA_INVALIDA_EXCEPTION
#define CARGA_HORARIA_INVALIDA_EXCEPTION


#include <stdexcept>


class CargaHorariaInvalidaException : public std::runtime_error {
    public:
        const unsigned short cargaHoraria;

        CargaHorariaInvalidaException(const unsigned short cargaHoraria);
        virtual ~CargaHorariaInvalidaException() = default;

};
#endif