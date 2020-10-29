#include <iostream>
#include <cstdlib>

using namespace std;
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

void jugar(string name) {
    int dados[3], i, d;
    int puntaje1=0;
    int totalBuncos=0;
    int fallido=0;
    cout<<"Bienvenido, "<<name<<"! \n\n";
    for (i=1; i<=6; i++) {
        int puntaje1Ronda=0;
        /// Version un jugador:
        while (puntaje1Ronda<21) {
            int bunco=0;
            int semi_bunco=0;
            int suma_dados=0;
            cout<<"Ingresa los tres dados: \n";
            /// Cargar los dados, si no es la version simulada se hace una funcion que genere el numero al azar.
            for (d=0; d<3; d++) cin>>dados[d];

            for (d=0; d<3; d++) {
                /// 21 pts o 2pts o 1 pt
                if (dados[d] == i) bunco++;
                /// 5 pts
                else if (d != 2 && dados[d] == dados[d+1]) semi_bunco++;
                /// 3 pts
                suma_dados+=dados[d];
            }
            /// 5 pts
            if (semi_bunco == 2) {
                cout<<"Haz sacado un semi-bunco! \n\n";
                puntaje1Ronda+=5;
            }
            /// 3 pts
            else if (suma_dados % 5 == 0 && bunco<3) {  /// (bunco < 3) porque 5*3= 15, multiplo de 5. en ese caso hay que sumar 21, no 3
                cout<<"Haz ganado 3 puntos! \n\n";
                puntaje1Ronda+=3;
            }
            /// 21 pts ó 2pts ó 1 pt
            else if (bunco > 0) {
                switch (bunco) {
                    case 3:
                        cout<<"Haz Sacado bunco, lacrita! 21 pts \n\n";
                        puntaje1Ronda+=21;
                        totalBuncos++;
                    break;
                    case 2:
                        cout<<"Haz sacado 2 puntos! \n\n";
                        puntaje1Ronda+=2;
                    break;
                    case 1:
                        cout<<"Haz sacado 1 punto! \n\n";
                        puntaje1Ronda+=1;
                    break;
                }
            }
            else {
                fallido++;
                cout<<"Tiro fallido \n\n";
            }
            system("pause");
            system("cls");
        }
        puntaje1+=puntaje1Ronda;
        cout<<"............................ \n";
        cout<<":::     RONDA Nro "<<i<<"      ::: \n";
        cout<<"::: PUNTAJE El Pepe: "<<puntaje1<<"  ::: \n";
        cout<<":::     Buncos:  "<<totalBuncos<<"       ::: \n............................ \n\n";
        system("pause");
        system("cls");
    }
    /// Restamos los tiros fallidos para la version de Un jugador
    cout<<"PUNTAJE FINAL antes de restar los tiros fallidos: "<<puntaje1<<"\n Cantidad de tiros fallidos: "<<fallido<<"\n\n";
    puntaje1-=(fallido*3);
    cout<<"PUNTAJE FINAL despues de restar los tiros fallidos: "<<puntaje1<<"\n\n";
    ///return puntaje1;
}
