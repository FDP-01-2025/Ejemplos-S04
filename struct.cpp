#include <iostream>
using namespace std;

typedef int entero;

struct Estudiante {
    string nombre; //campos (fields)
    string carnet;
    entero edad;
};

typedef struct Estudiante {
    string nombre; //campos (fields)
    string carnet;
    entero edad;
} Student; 

struct Estudiante crear_estudiante(){
    struct Estudiante e;
    cout << "Dame el nombre del estudiante: ";
    cin >> e.nombre;
    cout << "Dame el carnet del estudiante: ";
    cin >> e.carnet;
    cout << "Dame la edad del estudiante: ";
    cin >> e.edad;

    return e;
}

void mostrar_estudiante(struct Estudiante e){
    cout << "Nombre: " << e.nombre << "\n";
    cout << "Carnet: " << e.carnet << "\n";
    cout << "Edad: " << e.edad << "\n";
}

void mostrar_estudiante_por_posicion(struct Estudiante A[], int pos){
    mostrar_estudiante(A[pos]);
}

Estudiante func(Estudiante e){

}

entero main(){
    // struct Estudiante e1, e2;
    // e1.nombre = "José Pérez";
    // e1.carnet = "0000143";
    // e1.edad = 19;
    // e2.nombre = "María López";
    // e2.carnet = "00005251";
    // e2.edad = 20;

    struct Estudiante clase[40];
    for(int i = 0; i < 40; i++){
        clase[i] = crear_estudiante();
    }
    for(int i = 0; i < 40; i++){
        mostrar_estudiante(clase[i]);
    }
    int n;
    cout << "¿Qué estudiante quisieras ver?\n";
    cin >> n;
    mostrar_estudiante_por_posicion(clase, n);

    Student e;

    return 0;
}
