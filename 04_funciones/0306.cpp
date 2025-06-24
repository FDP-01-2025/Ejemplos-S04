#include <iostream>
using namespace std;

void procedimiento(string msj_inicial, int lim_inf, int lim_sup, string msj_exito, string msj_fallo){
    int dato;
    cout << msj_inicial;
    cin >> dato;
    if(lim_inf <= dato && dato <= lim_sup){
        cout << msj_exito;
    }else{
        cout << msj_fallo;
    }
}

int main(void){
    procedimiento("Dame tu edad:",18,34,"Eres adulto\n","No eres adulto.\n");
    procedimiento("Dame tu peso:",150,180,"Eres delgado\n","No eres delgado.\n");
    procedimiento("Dame tu estatura:",160,190,"Eres de altura promedio\n","Eres bajo o muy alto.\n");

    return 0;
}