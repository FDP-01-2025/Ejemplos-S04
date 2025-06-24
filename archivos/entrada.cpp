#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n, m, p;
    string palabra;

    ifstream mi_archivo("entrada.pedro");

    getline(mi_archivo, palabra);
    mi_archivo >> m >> p; 
    
    mi_archivo.close();

    cout << palabra << " " << m << " " << p << "\n";

    return 0;
}