#include "CargaHorariaInvalidaException.hpp"

using namespace ufpr;

CargaHorariaInvalidaException::CargaHorariaInvalidaException(
    const unsigned short cargaHoraria
) :std::runtime_error{"Carga Horaria Invalida"}, cargaHoraria{cargaHoraria}{}
