#include <iostream>
using namespace std;

int main(void){
    int op, a, b;

    while(true){
        cout << "¿Qué operación deseas?\n1. Suma\n2. Resta\n3. Multiplicación\n4. División\n0. Salir\n";
        cin >> op;
        if(op == 0){
            cout << "Gracias, vuelva pronto.\n";
            break;
        }
        switch(op){
            case 1:
                cout << "Dame dos números:\n";
                cin >> a >> b;
                cout << a+b << "\n";
                break;
            case 2:
                cout << "Dame dos números:\n";
                cin >> a >> b;
                cout << a-b << "\n";
                break;
            case 3:
                cout << "Dame dos números:\n";
                cin >> a >> b;
                cout << a*b << "\n";
                break;
            case 4:
                cout << "Dame dos números:\n";
                cin >> a >> b;
                if(b == 0){
                    cout << "Hey! No se puede dividir entre 0 ;)\n";
                    break;
                }
                cout << ((float) a)/b << "\n";
                break;
            default:
                cout << "Por favor ingrese un número entre 0 y 4 :3\n";
        }
    }

    return 0;
}