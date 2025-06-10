#include <iostream>
using namespace std;

void mostrar_arreglo(char A[]){
    cout << "[ ";
    for(int i = 0; i < 3; i++){
        cout << A[i] << " ";
    }
    cout << "]\n";
}

void mostrar_tablero(char f1[], char f2[], char f3[]){
    mostrar_arreglo(f1);
    mostrar_arreglo(f2);
    mostrar_arreglo(f3);
}

int main(){
    char f1[3] = {'-','-','-'};
    char f2[3] = {'-','-','-'};
    char f3[3] = {'-','-','-'};

    int jugador = 1, f, c;
    bool no_finalizado = true;

    do{
        mostrar_tablero(f1,f2,f3);
        cout << "Turno del Jugador #" << jugador << "\n";
        cout << "Dame una casilla: ";
        cin >> f >> c;
        int res = colocar(f1,f2,f3,f,c,jugador);
        if(res == 1){
            no_finalizado = false;
        }
    }while(no_finalizado);

    return 0;
}