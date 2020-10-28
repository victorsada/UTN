#include <iostream>
#include <cstdlib>

using namespace std;
#include "opciones.h"

int main () {
    int opciones;
    bool juega = true;

    menu();
    cin>>opciones;

    while (true) {
        /// Escoger la opcion
        switch(opciones) {
            case 1:
                system("cls");
                onePlayer();
            break;

            case 2:
                system("cls");
                twoPlayer();
            break;

            case 3:
                system("cls");
                higher();
            break;

            case 4:
                system("cls");
                simular();
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
