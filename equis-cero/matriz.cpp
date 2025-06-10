#include <iostream>
#include <cmath>
using namespace std;

void mostrar_arreglo(int A[], int tam){
    cout << "[ ";
    for(int i = 0; i < tam; i++){
        cout << A[i] << " ";
    }
    cout << "]\n\n";
}

void mostrar_matrix(int M[][3], int nfilas, int ncolumnas){
    for(int i = 0; i < nfilas; i++){
        cout << "[ ";
        for(int j = 0; j < ncolumnas; j++){
            cout << M[i][j] << " ";
        }
        cout << "]\n";
    }
    cout << "\n";
}

int main(){
    int n = 8;

    int A[6] = {1,2,3,4,5,6};
    mostrar_arreglo(A, 6);
    int B[4] = {32,45,67,88};
    mostrar_arreglo(B, 4);

    int M[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    mostrar_matrix(M, 3, 3);
    int N[2][3] = { {32,-12,66}, {77,100,5} };
    mostrar_matrix(N, 2, 3);

    int otra_matriz[3][2] = { {2,3}, {4,6}, {1,9} };
    //mostrar_matrix(otra_matriz, 3, 2);

    //int cosa_rara[4][5][6][7][9];

    int m;
    cin >> m;
    /*
    if(m % 2 == 0){
        cout << "Es par\n";
    }else{
        cout << "Es impar\n";
    }
    */

    cout << ( (m % 2 == 0)?"Es par\n":"Es impar\n" );

    return 0;
}