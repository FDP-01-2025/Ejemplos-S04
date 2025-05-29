#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = n-(n-i); j <= n; j++){
            cout << j;
        }
        cout << "\n";
    }

    return 0;
}