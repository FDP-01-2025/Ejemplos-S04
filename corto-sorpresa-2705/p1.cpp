#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int acum = 0;
    for(int i = 1; i <= n; i++){
        int acum2 = 0;
        for(int j = 1; j <= i; j++){
            acum2 += j;
        }
        acum += acum2;
    }

    cout << acum << "\n";

    return 0;
}