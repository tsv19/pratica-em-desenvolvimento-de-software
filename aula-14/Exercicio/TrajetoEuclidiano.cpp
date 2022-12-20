#include "TrajetoEuclidiano.hpp" 

#include <cmath>

TrajetoEuclidiano::TrajetoEuclidiano() : Trajeto() {
}

TrajetoEuclidiano::~TrajetoEuclidiano() {
}

double TrajetoEuclidiano::calcularDistanciaPontos(const Ponto* const p1, const Ponto* const p2) const {
    return sqrt(pow(p1->getCoordX() - p2->getCoordX(), 2) + pow(p1->getCoordY() - p2->getCoordY(), 2));
}
