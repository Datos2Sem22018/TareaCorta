//
// Created by mariano on 11/09/18.
//

#include "pizzaJQ.h"
#include <unistd.h>


void fnEcharJamon(){
    int iTimer = 10;
    cout << "Agregando el Jamon";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Listo!"<<endl;
}
