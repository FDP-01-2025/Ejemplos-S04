#include <iostream>
using namespace std;

int turnos = 0;

void mostrar_tablero(char tablero[][5]){
    for(int i = 0; i < 6; i++){
        cout << "[ ";
        for(int j = 0; j < 5; j++){
            cout << tablero[i][j] << " ";
        }
        cout << "]\n";
    }
}

bool validar_palabra(string palabra){
    if( palabra.size() != 5 ){
        cout << "La palabra debe ser de 5 letras!\n\n";
        return false;
    }
    if( !(isalpha(palabra[0]) && isalpha(palabra[1]) && isalpha(palabra[2]) && isalpha(palabra[3]) && isalpha(palabra[4])) ){
        cout << "La palabra debe tener solamente letras!\n\n";
        return false;
    }
    if( !(isupper(palabra[0]) && isupper(palabra[1]) && isupper(palabra[2]) && isupper(palabra[3]) && isupper(palabra[4])) ){
        cout << "La palabra debe estar completamente en mayúsculas!\n\n";
        return false;
    }

    return true;
}

bool esta_char_en_string(char c, string s){
    for(int i = 0; i < s.size(); i++){
        if( s[i] == c ){
            return true;
        }
    }

    return false;
}

bool procesar_palabra(string palabra, string secreto, char tablero[][5]){
    if( palabra == secreto ){
        for(int i = 0; i < 5; i++){
            tablero[turnos][i] = secreto[i];
        }
        mostrar_tablero(tablero);
        cout << "Felicidades!! Has adivinado la palabra!!\n\n";
        return true;
    }
    for(int i = 0; i < 5; i++){
        if( palabra[i] == secreto[i] ){
            tablero[turnos][i] = palabra[i];
        }else{
            if( esta_char_en_string(palabra[i], secreto) ){ // secreto.find(palabra[i]) != string::npos
                tablero[turnos][i] = tolower(palabra[i]);
            }else{
                tablero[turnos][i] = '*';
            }
        }
    }
    turnos++;
    if( turnos == 6 ){
        mostrar_tablero(tablero);
        cout << "Se te han acabado los turnos :(\nHas perdido!\n\n";
        return true;
    }

    return false;
}

int main(){
    string palabras[10] = {"LLAVE","BARCO","TRAPO","MANGO","GRANO","SALUD","RUMBO","PERRO","CALLE","HUEVO"};

    char tablero[6][5] = { {'-','-','-','-','-'}, 
                           {'-','-','-','-','-'}, 
                           {'-','-','-','-','-'}, 
                           {'-','-','-','-','-'}, 
                           {'-','-','-','-','-'}, 
                           {'-','-','-','-','-'} 
                         };

    srand(time(NULL));
    string palabra_secreta = palabras[rand() % 10];
    string intento;
    
    do{
        mostrar_tablero(tablero);
        cout << "Ingrese una palabra: ";
        cin >> intento;
        if(validar_palabra(intento)){
            if(procesar_palabra(intento, palabra_secreta, tablero)){
                break;
            }
        }
    }while(true);

    return 0;
}
