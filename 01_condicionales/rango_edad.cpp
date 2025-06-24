/*
    Hacer un programa que pida al usuario su edad y le diga en qué
    rango de edades se encuentra de acuerdo a la siguiente lista:
        - Niño: menor de 12 años.
        - Adolescente: de 12 a 17 años.
        - Adulto: de 18 a 64 años.
        - Anciano: de 65 años en adelante.
*/
#include <iostream>

using namespace std;

int main(void){
    int edad;

    cout << "Dame tu edad:\n";
    cin >> edad;

    if(edad < 12){
        cout << "Eres un niño.\n";
    }else{
        if(edad >= 12 && edad <= 17){
            cout << "Eres un adolescente.\n";
        }else{
            if(edad >= 18 && edad <= 64){
                cout << "Eres un adulto.\n";
            }else{
                cout << "Eres un anciano.\n";
            }
        }
    }

    return 0;
}