//
// Created by mariano on 11/09/18.
//

#include "pizzaV.h"
#include <unistd.h>


void fnEcharAceitunas(){
    int iTimer = 10;
    cout << "Agregando aceitunas";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Listo!"<<endl;
}

void fnEcharHongos(){
    int iTimer = 10;
    cout << "Agregando Hongos";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Listo!"<<endl;
}

void fnEcharCebollayChile(){
    int iTimer = 10;
    cout << "Agregando la Cebolla y el Chile";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Listo!"<<endl;
}