//
// Created by mariano on 11/09/18.
//

#ifndef SISTEMAPIZZAS_PIZZAS_H
#define SISTEMAPIZZAS_PIZZAS_H


#include "../pizzaPadre/pizzaPadre.h"

class pizzaS : public pizzaPadre {

public:
    void fnEcharCarne();
    void fnEcharCebollayChile();
    void fnAgregarJamon();
};


#endif //SISTEMAPIZZAS_PIZZAS_H
