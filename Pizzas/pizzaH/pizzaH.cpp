//
// Created by mariano on 11/09/18.
//

#include "pizzaH.h"
#include <unistd.h>


void fnEcharJamon(){
    int iTimer = 13;
    cout << "Agregando el Jamon";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Listo!"<<endl;
}
void fnEcharPinia(){
    int iTimer = 8;
    cout << "Agregando la Pinia";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Listo!"<<endl;
}