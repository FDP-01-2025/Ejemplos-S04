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
    do{
        cout << "Escoge una posición: ";
        cin >> fil >> col;
        if( tablero[fil][col] == '-' ){
            tablero[fil][col] = ( (jugador==1)?'X':'0' );
            break;
        }else{
            cout << "Esa celda ya está ocupada!! :v\n";
        }  
    }while(true);
}

bool victoria_alcanzada(char M[][3]){
    return 
    (
        ( M[1][1] != '-' && 
            (
                (M[1][0] == M[1][1] && M[1][1] == M[1][2]) ||
                (M[0][1] == M[1][1] && M[1][1] == M[2][1]) ||
                (M[0][0] == M[1][1] && M[1][1] == M[2][2]) ||
                (M[0][2] == M[1][1] && M[1][1] == M[2][0])
            )
        )
        ||
        ( M[0][0] != '-'   && 
            (
                (M[0][0] == M[0][1] && M[0][1] == M[0][2]) ||
                (M[0][0] == M[1][0] && M[1][0] == M[2][0])
            )
        )
        ||
        ( M[2][2] != '-' &&
            (
                (M[2][0] == M[2][1] && M[2][1] == M[2][2]) ||
                (M[0][2] == M[1][2] && M[1][2] == M[2][2])
            )
        )
    );
}

int main(void){
    char tablero[3][3] = { {'-','-','-'}, {'-','-','-'}, {'-','-','-'} };

    bool juego_finalizado = false;

    int celdas_ocupadas = 0;

    int jugador = 1;
    do{
        mostrar_matriz(tablero, 3, 3);
        gestionar_turno(jugador, tablero);

        if( victoria_alcanzada(tablero) ){
            mostrar_matriz(tablero, 3, 3);
            cout << "Ha ganado el jugador #" << jugador << "!!!!!\n";
            juego_finalizado = true;
        }else{
            celdas_ocupadas++;
            if( celdas_ocupadas == 9 ){
                mostrar_matriz(tablero, 3, 3);
                cout << "El juego terminó en empate :(\n";
                juego_finalizado = true;
            }else{
                jugador = ((jugador==1)?2:1);
            }
        }
    }while(!juego_finalizado);

    return 0;
}