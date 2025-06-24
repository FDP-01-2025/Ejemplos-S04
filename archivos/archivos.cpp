//Boilerplate
#include <iostream>
#include <fstream>
using namespace std;

int main(){

    int n;
    int m;
    ofstream mi_archivo("salida.pedro");

    mi_archivo << "Hola Mundo!\n";
    mi_archivo << "¿Cómo estás?\n\n";

    mi_archivo.close();

    ofstream mi_archivo2("salida.pedro",ios::app);

    for(int i = 1; i <= 10; i++){
        mi_archivo2 << i << "\n";
    }

    mi_archivo2.close();

    return 0;
}