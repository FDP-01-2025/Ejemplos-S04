#include <iostream>

using namespace std;

int main(void){
    int n;
    //float
    cout << "Dame un número entero:\n";
    cin >> n;  

    if(n % 2 == 0){
        cout << "Tu número es par\n";
    }else{
        cout << "Tu número es impar\n";
    }

    return 0;
}
