#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int digits[100];
    int size = 0;

    while(n > 9){
        digits[size] = n % 8;
        size++;
        n = n / 8;
    }

    cout << n;
    for(int i = size-1; i >= 0; i--){
        cout << digits[i];
    }
    cout << "\n";

    return 0;
}