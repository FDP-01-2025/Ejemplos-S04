#include <iostream>
using namespace std;

void mostrar_matriz(char M[][3], int nfilas, int ncolumnas){
    for(int i = 0; i < nfilas; i++){
        cout << "[ ";
        for(int j = 0; j < ncolumnas; j++){
            cout << M[i][j] << " ";
        }
        cout << "]\n";
    }
    cout << "\n";
}

void gestionar_turno(int jugador, char tablero[][3]){
    int fil, col;
    cout << "Turno del Jugador #" << jugador << "\n";
    cout << "Escoge una posición: ";
    cin >> fil >> col;
    //TODO: Se pone el caracter del jugador
    tablero[fil][col] = ( (jugador==1)?'X':'0' );
}

int main(void){
    char tablero[3][3] = { {'-','-','-'}, {'-','-','-'}, {'-','-','-'} };

    bool juego_finalizado = false;

    int jugador = 1;
    do{
        mostrar_matriz(tablero, 3, 3);
        gestionar_turno(jugador, tablero);
        jugador = ((jugador==1)?2:1);
    }while(!juego_finalizado);

    return 0;
}