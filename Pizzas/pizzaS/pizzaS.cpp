//
// Created by mariano on 11/09/18.
//
#include <unistd.h>
#include "pizzaS.h"

void pizzaS::fnEcharCarne(){
    int iTimer = 10;
    cout << "Agregando la Carne";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Listo!"<<endl;
}

void pizzaS::fnEcharCebollayChile(){
    int iTimer = 10;
    cout << "Agregando la Cebolla y el Chile";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Listo!"<<endl;
}

void pizzaS::fnAgregarJamon(){
    int iTimer = 10;
    cout << "Agregando el Jamon";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Listo!"<<endl;
}