#include <iostream>

using namespace std;

int main(void){
    int dia;

    cout << "Dame un número entre 1 y 7:\n";
    cin >> dia;

    if(dia == 1){
        cout << "Es lunes\n";
    }else{
        if(dia == 2){
            cout << "Es martes\n";
        }else{
            if(dia == 3){
                cout << "Es miércoles\n";
            }else{
                if(dia == 4){
                    cout << "Es jueves\n";
                }else{
                    if(dia == 5){
                        cout << "Es viernes\n";
                    }else{
                        if(dia == 6){
                            cout << "Es sábado\n";
                        }else{
                            cout << "Es domingo\n";
                        }
                    }
                }
            }
        }
    }

    return 0;
}