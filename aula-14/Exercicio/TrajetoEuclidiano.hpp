#ifndef TRAJETOEUCIDIANO_HPP
#define TRAJETOEUCIDIANO_HPP

#include "Trajeto.hpp"


class TrajetoEuclidiano : public Trajeto{
    public:
        TrajetoEuclidiano();
        virtual ~TrajetoEuclidiano();
    protected:
        virtual double calcularDistanciaPontos(const Ponto* const p1, const Ponto* const p2) const override;
};


#endif