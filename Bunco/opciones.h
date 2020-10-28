#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>
#include <cstdlib>

using namespace std;

void jugar() {

}
void onePlayer() {
    cout<<"Aca se jugara con UN jugador \n\n";
    system("pause");
    system("cls");
}

void twoPlayer() {
    cout<<"Aca se jugara con DOS jugador \n\n";
    system("pause");
    system("cls");
}

void higher() {
    cout<<"Puntaje mas alto: \n\n"<<"Nombre del jugador: "<<"XXX"<<" | Cantidad de Buncos (Esto sera una variable) \n\n";
    system("pause");
    system("cls");
}

void simular() {
    cout<<"Aca jugaras en el modo simulado \n\n";
    system("pause");
    system("cls");
}

void menu() {
    cout<<"::::: Bienvenido a jugar Bunco ::::: \n\n Escoja el numero de la opcion que desea seleccionar: \n\n";
    cout<<"1) Juego nuevo para UN jugador. \n2) Juego nuevo para DOS jugadores. \n3) Puntacion mas alta. \n";
    cout<<"4) Modo simulado (carga de datos manual). \n5) Salir. \n\n Ingresar: " ;
}


#endif // FUNCIONES_H_INCLUDED
