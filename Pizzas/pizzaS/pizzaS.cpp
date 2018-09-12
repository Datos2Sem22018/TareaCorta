//
// Created by mariano on 11/09/18.
//
#include <unistd.h>
#include "pizzaS.h"

void pizzaS::fnEcharCarne(){
    int iTimer = 6;
    cout << "Agregando la Carne";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Listo!"<<endl;
}

void pizzaS::fnEcharCebollayChile(){
    int iTimer = 12;
    cout << "Agregando la Cebolla y el Chile";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Listo!"<<endl;
}

void pizzaS::fnAgregarJamon(){
    int iTimer = 13;
    cout << "Agregando el Jamon";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Listo!"<<endl;
}

void pizzaS::fnHacerPizza() {
    fnPrepararLaMasa();
    fnPonerPastaTomate();
    fnAgregarJamon();
    fnEcharCarne();
    fnEcharCebollayChile();
    fnEcharQueso();
    fnHornearPizza();
    fnServir();

}