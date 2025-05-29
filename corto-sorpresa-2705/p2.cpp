#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int data[n] = {1,1};
    for(int i = 1; i <= n; i++){
        string spaces(n-i,' ');
        string rest = "1";
        switch(i){
            case 1:
                break;
            case 2:
                rest += " 1";
                break;
            default:
                for(int k = (i-1)-1; k > 0; k--){
                    data[k] += data[k-1];
                }
                data[i-1] = 1;
                for(int k = 1; k < i; k++){
                    rest += " " + to_string(data[k]);
                }
        }
        cout << spaces << rest << "\n";
    }

    return 0;
}