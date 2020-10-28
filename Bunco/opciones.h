#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>
#include <cstdlib>

using namespace std;

void jugar() {

}
void onePlayer(string player1) {
    cout<<"\n"<<"Jugador 1: "<<player1<<"\n\n";
    system("pause");
    system("cls");
}

void twoPlayer(string player1, string player2) {
    cout<<"\n"<<"Jugador 1: "<<player1<<" | Jugador 2: "<<player2<<"\n\n";
    system("pause");
    system("cls");
}

void higher(string player/**, int buncos */) {
    cout<<"Puntaje mas alto: \n\n"<<"Nombre del jugador: "<<player<<" | Cantidad de Buncos (Esto sera una variable) \n\n";
    system("pause");
    system("cls");
}

void simular(string player1) {
    cout<<"\n"<<"Jugador 1: "<<player1<<"\n\n";
    system("pause");
    system("cls");
}

void menu() {
    cout<<"::::: Bienvenido a jugar Bunco ::::: \n\n Escoja el numero de la opcion que desea seleccionar: \n\n";
    cout<<"1) Juego nuevo para UN jugador. \n2) Juego nuevo para DOS jugadores. \n3) Puntacion mas alta. \n";
    cout<<"4) Modo simulado (carga de datos manual). \n5) Salir. \n\n Ingresar: " ;
}


#endif // FUNCIONES_H_INCLUDED
