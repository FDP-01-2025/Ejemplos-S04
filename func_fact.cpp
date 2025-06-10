#include <iostream>
using namespace std;

void llenar_arreglo(int arreglo[], int size);
void mostrar_arreglo(int arreglo[], int size);
int factorial(int n);
void factorial_arreglo(int arreglo[], int size);

int main(){
    int tam = 10; //dato quemado
    int numeros[tam];

    llenar_arreglo(numeros, tam);
    mostrar_arreglo(numeros, tam);
    factorial_arreglo(numeros, tam);
    mostrar_arreglo(numeros, tam);

    return 0;
}

void llenar_arreglo(int arreglo[], int size){
    for(int i = 0; i < size; i++){
        cout << "Dame el dato #" << i+1 << ": ";
        cin >> arreglo[i];
    }
}

void mostrar_arreglo(int arreglo[], int size){
    cout << "[ ";
    for(int i = 0; i < size; i++){
        cout << arreglo[i] << " ";
    }
    cout << "]\n";
}

int factorial(int n){
    int acum = 1;
    int cont = 1;
    while(cont <= n){
        //acum *= cont++;
        acum = acum * cont;
        cont = cont + 1;
    }
    return acum;
}

void factorial_arreglo(int arreglo[], int size){
    for(int i = 0; i < size; i++){
        arreglo[i] = factorial(arreglo[i]);
    }
}









/*
int i = 0;
i++; -> i = i + 1;

++i -> i = i + 1

int a = 3;

cout << a + (i++);   ->  3

cout << a + (++i);   ->  4
*/