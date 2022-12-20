#ifndef TRAJETOMANHATTAN_HPP
#define TRAJETOMANHATTAN_HPP

#include "Trajeto.hpp"

class TrajetoManhattan : public Trajeto{
    public:
        TrajetoManhattan();
        virtual ~TrajetoManhattan();
    protected:
        virtual double calcularDistanciaPontos(const Ponto* const p1, const Ponto* const p2) const override;
};

#endif