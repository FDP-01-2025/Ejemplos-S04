#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream archivo("secuencia.txt");

    int dato;
    for(int i = 1; i <= 10; i++){
        archivo >> dato;
    }

    archivo.close();

    ifstream archivo2("secuencia.txt");

    int datos[5000];
    int cont = 0;
    while(archivo2 >> dato){
        datos[cont] = dato;
        cont++;
    }

    cout << datos[9] << "\n";

    archivo2.close();

    return 0;
}
