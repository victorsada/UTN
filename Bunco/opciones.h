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

void higher(/**string player, int buncos */) {
    cout<<"Puntaje mas alto: \n\n"<<"Nombre del jugador: "<<" | Cantidad de Buncos (Esto sera una variable) \n\n";
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

/** Reglas del bunco:
    6 rondas, del 1 al 6. ---->  Para comenzar c/ronda se lanzan tres dados. Acorde a los resultados, tendra un puntaje y se vera si sigue lanzando:
    .................................................................................
    PUNTAJE:
    21 pts --> 3 dados iguales al numero de ronda.
     5 pts --> 3 dados iguales (pero distintos al numero de ronda)
     3 pts --> la suma de los tres dados es divisible entre cinco
     2 pts --> Si los tres dados forman una escalera
     1 pt  -->  Por cada coincidencia con el numero de la ronda
    NOTA: Si mas de una de estas condicionantes suceden, se tomara en cuenta solo la que mayor puntaje le de al jugador
    .................................................................................
    ¿CUANTO DURA UN TURNO EN LA MODALIDAD DOS JUGADORES?
    DOS JUGADORES ---> hasta que el puntaje sumado sea >= 21 ó tenga un tiro fallido
    .................................................................................
    ¿CUANDO TERMINA UNA RONDA?
       UN JUGADOR ---> hasta que el puntaje sumado sea >= 21. Los tiros fallidos se cuentan para restar 3 puntos al final por cada uno.
    DOS JUGADORES ---> El primer jugador que sume un puntaje >= 21.
    En caso de que el primer jugador cumpla esa condicion en el primer turno. El segundo jugador tiene la oportunidad de usar su turno. */

#endif // FUNCIONES_H_INCLUDED
