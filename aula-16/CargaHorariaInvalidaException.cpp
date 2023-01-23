#include "CargaHorariaInvalidaException.hpp"

CargaHorariaInvalidaException::CargaHorariaInvalidaException(
    const unsigned short cargaHoraria
) :std::runtime_error{"Carga Horaria Invalida"}, cargaHoraria{cargaHoraria}{}
