#include <bits/stdc++.h>
using namespace std;

int main()
{
    int start, n, ratio;
    cin >> start >> n >> ratio;

    int termino = start; 
    int acum = start;
    for(int i = 2; i <= n; i++){
        termino = termino * 2;
        acum = acum + termino;
    }

    cout << acum << "\n";

    return 0;
}