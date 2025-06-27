#include "header.h"

int pedir_entero(string msj, int inf, int sup, string msj_error){
    int dato;
    do{
        cout << msj;
        cin >> dato;
        if( inf <= dato && dato <= sup ){
            return dato;
        }else{
            cout << msj_error;
        }
    }while(true);
}

void mostrar_tablero_pistas(char tablero[][13], int nfilas){
    for(int i = 0; i < nfilas; i++){
        cout << "[ ";
        for(int j = 0; j < 13; j++){
            cout << tablero[i][j] << " ";
        }
        cout << "]\n";
    }
    cout << "\n";
    cout << "1. Da vida al arte con pinceles, colores o movimientos.\n";
    cout << "2. Viaja más allá de nuestro planeta y flota en gravedad cero.\n";
    cout << "3. Protege a la comunidad y mantiene el orden.\n";
    cout << "4. Señor que cuida la salud y salva vidas en hospitales.\n";
    cout << "5. Señorita que informa al público sobre lo que sucede en el mundo.\n";
    cout << "6. Prepara deliciosos platillos y trabaja en una cocina.\n";
    cout << "\n";
}

void jugar(char tablero[][13], int nfilas, string soluciones[], int nsol){
    int item;
    string palabra;
    string registro[nsol];

    do{
        mostrar_tablero_pistas(tablero, 11);
        item = pedir_entero("¿Qué palabra desea colocar?\n(Ingrese 0 para salir del programa)\nEntrada: ",0,6,"Opción inválida!\n");
        if( item == 0 ){
            break;
        }
        cout << "Ingrese la palabra para la posición " << item << ": ";
        cin >> palabra;
        if( palabra.length() == soluciones[item-1].length() ){
            /* Descomentar la opción a utilizar y comentar la otra opción */
            colocar_palabra(tablero, nfilas, item, palabra);
            //colocar_palabra_v2(tablero, nfilas, item, palabra);
            registro[item-1] = palabra;

            if( verificar_victoria(soluciones, nsol, registro) ){
                mostrar_tablero_pistas(tablero, 11);
                cout << "Has completado el crucigrama!!!!!!!!!!! :D\n\n";
                break;
            }
        }else{
            cout << "ERROR: La palabra en esa posición debe tener " << soluciones[item-1].length() << " letras.\n\n";
        }
    }while(true);
}

void colocar_palabra(char tablero[][13], int nfilas, int number, string pal){
    switch(number){
        case 1:
            for(int i = 0; i < pal.length(); i++){
                tablero[9][2+i] = pal[i];
            }
            break;
        case 2:
            for(int i = 0; i < pal.length(); i++){
                tablero[1+i][7] = pal[i];
            }
            break;
        case 3:
            for(int i = 0; i < pal.length(); i++){
                tablero[5][6+i] = pal[i];
            }
            break;
        case 4:
            for(int i = 0; i < pal.length(); i++){
                tablero[3+i][10] = pal[i];
            }
            break;
        case 5:
            for(int i = 0; i < pal.length(); i++){
                tablero[9-i][3] = pal[i];
            }
            break;
        case 6:
            for(int i = 0; i < pal.length(); i++){
                tablero[3][1+i] = pal[i];
            }
    }
}

void colocar_palabra_v2(char tablero[][13], int nfilas, int number, string pal){
    switch(number){
        case 1:
            colocar_palabra_v2_ayudante(tablero, pal, 9, 2, 'R');
            break;
        case 2:
            colocar_palabra_v2_ayudante(tablero, pal, 1, 7, 'D');
            break;
        case 3:
            colocar_palabra_v2_ayudante(tablero, pal, 5, 6, 'R');
            break;
        case 4:
            colocar_palabra_v2_ayudante(tablero, pal, 3, 10, 'D');
            break;
        case 5:
            colocar_palabra_v2_ayudante(tablero, pal, 9, 3, 'U');
            break;
        case 6:
            colocar_palabra_v2_ayudante(tablero, pal, 3, 1, 'R');
    }
}

void colocar_palabra_v2_ayudante(char tablero[][13], string pal, int f, int c, char direccion){
    for(int i = 0; i < pal.length(); i++){
        tablero [ f + ( (direccion=='D')?i:( (direccion=='U')?-i:0 ) ) ] [ c + ( (direccion=='R')?i:0 ) ] = pal[i];
    }
}

bool verificar_victoria(string soluciones[], int n, string registro[]){
    for(int i = 0; i < n; i++){
        if( soluciones[i] != registro[i] ){
            return false;
        }
    }
    return true;
}
