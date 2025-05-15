#include <iostream>
using namespace std;

int main(void){
    srand(time(NULL));
    int num_secreto = rand() % 100 + 1;

    int max_intentos = 10;
    int intento;
    bool flag = false;
    for(int i = 1; i <= max_intentos; i++){
        cout << "Dame un número:\n";
        cin >> intento;
        if(intento == num_secreto){
            cout << "GANASTE!!\n";
            flag = true;
            break;
        }
    }

    if(!flag){
        cout << "PERDISTE :(\n";
    }

    return 0;
}