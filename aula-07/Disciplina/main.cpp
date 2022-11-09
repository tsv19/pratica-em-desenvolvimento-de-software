#include <iostream>

#include <list>

#include "Pessoa.hpp"

int main(){

    std::list<Pessoa *> lista;

    Pessoa *p1{new Pessoa{"Tiago"}}; 
    Pessoa *p2{new Pessoa{"Joao"}}; 
    Pessoa *p3{new Pessoa{"Arthur"}}; 

    lista.push_back(p1);
    lista.push_back(p2);
    lista.push_front(p3);

    std::list<Pessoa *>::iterator it{lista.begin()};

    while (it != lista.end()){
        if ( (*it)->getNome() == "Arthur" ){
            delete *it;
            it = lista.erase(it);
        }
        else {
            it++;
        }
    }

    return 0;
}
