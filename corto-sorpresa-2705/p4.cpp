#include <bits/stdc++.h>
using namespace std;

int main()
{
    string binary;
    cin >> binary;

    switch(binary.size()%3){
        case 1:
            binary = "00" + binary;
            break;
        case 2:
            binary = "0" + binary;
            break;
    }

    for(int i = 0; i < binary.size(); i = i + 3){
        string local = binary.substr(i,3);
        
        if (local == "000")
        {
            cout << 0;
        }
        else if (local == "001")
        {
            cout << 1;
        }
        else if (local == "010")
        {
            cout << 2;
        }
        else if (local == "011")
        {
            cout << 3;
        }
        else if (local == "100")
        {
            cout << 4;
        }
        else if (local == "101")
        {
            cout << 5;
        }
        else if (local == "110")
        {
            cout << 6;
        }
        else{
            cout << 7;
        }
    }

    cout << "\n";

    return 0;
}