#include <iostream>
#include <cmath>

using namespace std;

//f(x) = x²+2
int f(int x){
    return pow(x,2) + 2;
}

//g(x,y) = 2x - 3y
int g(int x, int y){
    int valor = 2*x - 3*y;
    int n = 3.5;
    return valor;
} 

void cosito(int n){
    cout << n << "\n";
    return;
}

int main(void){
    //Funciones Predefinidas
    int potencia = pow(2,8); // 2⁸
    
    cout << f(2) << "\n";
    cout << f(5) << "\n";
    int temp = g(3,4);
    cout << temp << "\n";
    cout << g(-5,10) << "\n";

    cosito(45);
    cosito(-99);

    return 0;
}
