#include <iostream>

using namespace std;

int main(void){
    int dia;

    cout << "Dame un día de la semana como número (el lunes es 1):\n";
    cin >> dia;

    if(dia == 6 || dia == 7){
        cout << "Descansa hoy, papu, no estudies ;).\n";
    }

    return 0;
}
