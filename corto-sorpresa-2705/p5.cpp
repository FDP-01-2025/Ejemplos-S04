#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int digits[100];
    int cont = 0;

    while(n > 7){
        digits[cont] = n % 8;
        cont++;
        n = n / 8;
    }

    cout << n;
    for(int i = cont-1; i >= 0; i--){
        cout << digits[i];
    }
    cout << "\n";

    return 0;
}