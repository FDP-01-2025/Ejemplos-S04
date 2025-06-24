#include <iostream>

using namespace std;

int main(void){
    float nota;

    cout << "Dame tu nota:\n";
    cin >> nota;

    if(nota >= 6){
        cout << "La pasaste :)\n";
    }else{
        cout << "La dejaste :(\n";
    }

    return 0;
}