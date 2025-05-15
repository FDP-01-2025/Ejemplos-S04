#include <iostream>

using namespace std;

int main(void){
    int dia;

    cout << "Dame un número entre 1 y 7:\n";
    cin >> dia;

    switch(dia){
        case 1:
            cout << "Es lunes\n";
        case 2:
            cout << "Es martes\n";
        case 3:
            cout << "Es miércoles\n";
        case 4:
            cout << "Es jueves\n";
        case 5:
            cout << "Es viernes\n";
        case 6:
            cout << "Es sábado\n";
        case 7:
            cout << "Es domingo\n";
    }

    return 0;
}