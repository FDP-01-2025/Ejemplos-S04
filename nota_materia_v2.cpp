#include <iostream>

using namespace std;

int main(void){
    float nota;

    cout << "Dame tu nota:\n";
    cin >> nota;

    if(nota >= 6){
        cout << "Tu siguiente materia es Programación Web\n";
    }

    return 0;
}