#include <iostream>
#include "Pizzas/pizzaPadre/pizzaPadre.h"
#include "Pizzas/pizzaS/pizzaS.h"
#include "Pizzas/pizzaV/pizzaV.h"

int main() {
    pizzaPadre pz;
    pz.fnPrepararLaMasa();


    pizzaS ps1;
    ps1.fnPrepararLaMasa();

    pizzaV pv1;
    pv1.fnPrepararLaMasa();
    return 0;
}