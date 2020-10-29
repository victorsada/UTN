#include <iostream>
#include <cstdlib>

using namespace std;
#include "opciones.h"

int main() {
    string name, players[2];
    int puntaje;
    int opciones;

    menu();
    cin>>opciones;

    while (true) {
        /// Escoger la opcion
        switch(opciones) {
            case 1:
                system("cls");
                cout<<"Ingrese su nombre: ";
                cin>>players[0];
                onePlayer(players[0]);
            break;

            case 2:
                system("cls");
                cout<<"Ingrese nombre del jugador 1: ";
                cin>>players[0];
                cout<<"Ingrese nombre del jugador 2: ";
                cin>>players[1];

                twoPlayer(players[0], players[1]);
            break;

            case 3:
                system("cls");
                higher();
            break;

            /**case 4:
                system("cls");
                cout<<"Ingrese su nombre: ";
                cin>>name;
                system("cls");
                puntaje = jugar(name);
                cout<<"Puntaje obtenido: "<<puntaje<<"\n\n";
            break;*/

            case 5:
                system("cls");
                cout<<"Gracias por usar nuestro programa. \n\n";
                return 0;
            break;
        }
        /// Caso de ingresar un dato equivocado:
        if (opciones < 1 || opciones > 5) {
            cout<<"\n\n"<<"Haz escogido "<<opciones<<". Selecciona una opcion valida, por favor. \n\n";
            system("pause");
            system("cls");
        }
        /// Al terminar de ejecutar la opcion seleccionada en el menu, se muestra nuevamente:
        menu();
        cin>>opciones;
    }
    return 0;
}
