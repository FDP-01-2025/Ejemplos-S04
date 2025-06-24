#include <iostream>
using namespace std;

int main(void){
    int cant_est;

    cout << "¿Cuántos estudiantes tenés?\n";
    cin >> cant_est;

    float notas[cant_est];

    for(int i = 0; i < cant_est; i++){
        cout << "Dame la nota del estudiante #" << i+1 << ":\n";
        cin >> notas[i];
    }

    float acum = 0.0;
    for(int i = 0; i < cant_est; i++){
        acum += notas[i];
    }

    float promedio = acum / cant_est;

    cout << "El promedio de notas es: " << promedio << "\n";

    return 0;
}