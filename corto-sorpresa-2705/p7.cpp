#include <bits/stdc++.h>
using namespace std;

int main()
{
    string cad;
    getline(cin, cad);

    int counters[4] = {0,0,0,0};

    for(int i = 0; i < cad.size(); i++){
        char c = cad[i];
        if( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ){
            counters[0]++;
        }else{
            if(c >= '0' && c <= '9'){
                counters[1]++;
            }else{
                if(c == ' '){
                    counters[2]++;
                }else{
                    counters[3]++;
                }
            }
        }
    }

    cout << "La cantidad de caracteres es " << cad.size() << "\n";
    cout << "La cantidad de caracteres alfabéticos es " << counters[0] << "\n";
    cout << "La cantidad de caracteres dígitos es " << counters[1] << "\n";
    cout << "La cantidad de espacios es " << counters[2] << "\n";
    cout << "La cantida de otros caracteres es " << counters[3] << "\n";

    return 0;
}