#include <iostream>

using namespace std;

int main(void){
    int n1, n2, op;

    cout << "Dame dos números:\n";
    cin >> n1 >> n2;

    cout << "¿Qué opción quieres realizar?\n1. Suma\n2. Resta\n3. Multiplicación\n4. División\n";

    cin >> op; //Aquí se recibe lo que el usuario quiere hacer

    /*Lo siguiente evalúa la opción del usuario
    Para saber si lo que ha pedido es suma, resta,
    multiplicación o división. Y se imprime en pantalla
    el resultado correspondiente.*/
    if(op == 1){
        cout << "La suma es: " << n1 + n2 << "\n";
    }
    else{
        //if anidado
        //En inglés, nested if
        if(op == 2){
            cout << "La resta es: " << n1 - n2 << "\n";
        }
        else{
            //if anidado
            if(op == 3){
                cout << "La multiplicación es " << n1 * n2 << "\n";
            }
            else{
                cout << "la división es " << ((float) n1) / n2 << "\n";
            }
        }
    }

    return 0;
}