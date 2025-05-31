#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int acum_principal = 0;
    for(int i = 1; i <= n; i++){
        int acum = 0;
        for(int j = 1; j <= i; j++){
            acum = acum + j;
        }
        acum_principal = acum_principal + acum;
    }

    cout << acum_principal << "\n";

    return 0;
}