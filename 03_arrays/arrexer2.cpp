#include <iostream>
using namespace std;

int main(void){
    int num_enteros;

    cout << "¿Cuántos enteros vas a ingresar?\n";
    cin >> num_enteros;

    int enteros[num_enteros];

    for(int i = 0; i < num_enteros; i++){
        cout << "Dame el entero #" << i+1 << ":\n";
        cin >> enteros[i];
    }

    int cont_pares = 0, cont_impares = 0, cont_positivos = 0, cont_negativos = 0;
    for(int i = 0; i < num_enteros; i++){
        if(enteros[i] % 2 == 0){
            cont_pares++;
        }else{
            cont_impares++;
        }
        if(enteros[i] > 0){
            cont_positivos++;
        }else{
            if(enteros[i] < 0){
                cont_negativos++;
            }
        }
    }

    cout << "La cantidad de pares es: " << cont_pares << "\n";

    return 0;
}