#include <iostream>
using namespace std;

int main(void){
    int cont = 20;

    //Se garantiza que el cuerpo se ejecute
    //al menos una vez
    do{
        cout << cont << "\n";
        cont++;
    }while(cont < 11);

    return 0;
}
