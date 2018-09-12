//
// Created by mariano on 11/09/18.
//

#include "pizzaPadre.h"
#include <unistd.h>

pizzaPadre ::pizzaPadre() {

}

void pizzaPadre::fnPrepararLaMasa(){
    int iTimer = 30;
    cout << "Preparando la masa";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Listo!"<<endl;
}

void pizzaPadre::fnPonerPastaTomate(){
    int iTimer = 10;
    cout << "Agregando la pasta de tomate";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Listo!"<<endl;
}

void pizzaPadre::fnEcharQueso(){
    int iTimer = 10;
    cout << "Agregando el queso";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Listo!"<<endl;
}

void pizzaPadre::fnHornearPizza(){
    int iTimer = 15;
    cout << "Horneando";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Listo!"<<endl;
}

void pizzaPadre::fnServir(){
    int iTimer = 5;
    cout << "Sirviendo la Pizza";
    while (iTimer != 0){
        cout << ". "<<flush;
        iTimer--;
        usleep(1000000);
    }
    cout << " Disfrute!"<<endl;
}

void pizzaPadre::fnHacerPizza(){

};