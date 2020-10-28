#include <iostream>
#include <cstdlib>

using namespace std;
#include "opciones.h"

int main () {
    int opciones;
    bool juega = true;
    string players[2], higherScore="fulano";

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
                higher(higherScore);
            break;

            case 4:
                system("cls");
                cout<<"Ingrese su nombre: ";
                cin>>players[0];
                simular(players[0]);
            break;

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
        /// Al terminar de ejecutar la opcion seleccionada en el men�, se muestra nuevamente:
        menu();
        cin>>opciones;
    }


    return 0;
}
