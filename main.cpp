#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(){
    setlocale(LC_ALL, "spanish");
    int opcion;
    while(true){
    system("cls");//cls para windows
    cout << "EMBAUCADO" << endl;
    cout << "--------------------" << endl;
    cout << "1 - JUGAR" << endl;
    cout << "2 - ESTADÍSTICAS" << endl;
    cout << "3 - CRÉDITOS"<< endl;
    cout << "--------------------" << endl;
    cout << "0 - SALIR" << endl;
    cout<< endl;
    cout<<"Elija la opcion que prefiera"<<endl;
    cin>>opcion;

    switch(opcion){
        case 1:
            system("cls");
            cout<<"Se juega la partida!"<<endl;
            system("pause");
            break;

        case 2:
            system("cls");
            cout<< "Estas son las estadisticas" << endl;
            system("pause");
            break;
        case 3:
            system("cls");
            cout<<"Estos son los creditos del juego"<<endl;
            system("pause");
            break;
        case 0:
            return 0;
            break;
        default:
            cout<<"Opción no valida por favor ingrese un numero correspondiente a una acción" <<endl;
            system("pause");
    }


    }
}
