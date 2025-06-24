#include <iostream>
using namespace std;

int main(void){
    int n = 3;
    float f = 3.2;
    bool flag = false;
    char c = 'h';
    string cad = "h";
/*
    ASÍ NO!!!!!!!!!!!

    string cad1 = "*";
    string cad2 = "**";
    string cad3 = "***";
    string cad4 = "****";
    string cad5 = "*****";

    cout << cad1 << "\n" << cad2 << "\n" << cad3 << "\n" << cad4 << "\n" << cad5 << "\n";
*/
    for(int i = 1; i <= 10; i++){
        string asterisk(i,'#');
        cout << asterisk << "\n";
    }

    return 0;
}