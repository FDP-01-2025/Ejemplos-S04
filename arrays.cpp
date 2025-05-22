#include <iostream>
using namespace std;

int main(void){
    int edades[7];

    for(int i = 0; i < 7; i++){
        cin >> edades[i];
    }

    for(int i = 0; i < 7; i++){
        cout << edades[i] << "\n";
    }

/*     cin >> edades[0];
    cin >> edades[1];
    cin >> edades[2];
    cin >> edades[3];
    cin >> edades[4];
    cin >> edades[6];
    cin >> edades[5];

    cout << edades[0] << "\n";
    cout << edades[1] << "\n";
    cout << edades[2] << "\n";
    cout << edades[3] << "\n";
    cout << edades[4] << "\n";
    cout << edades[5] << "\n";
    cout << edades[6] << "\n"; */

    return 0;
}