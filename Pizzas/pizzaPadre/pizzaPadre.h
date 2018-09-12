//
// Created by mariano on 11/09/18.
//

#ifndef SISTEMAPIZZAS_PIZZAPADRE_H
#define SISTEMAPIZZAS_PIZZAPADRE_H

#include <iostream>


using namespace std;



class pizzaPadre {

protected:
    string sName;
    string sTamanio;

public:
    pizzaPadre();
    virtual void fnHacerPizza();

protected:
    void fnPrepararLaMasa();
    void fnPonerPastaTomate();
    void fnEcharQueso();
    void fnHornearPizza();
    void fnServir();



};


#endif //SISTEMAPIZZAS_PIZZAPADRE_H
