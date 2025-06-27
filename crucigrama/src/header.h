#include <iostream>
using namespace std;

int pedir_entero(string msj, int inf, int sup, string msj_error);
void mostrar_tablero_pistas(char tablero[][13], int nfilas);
void jugar(char tablero[][13], int nfilas, string soluciones[], int nsol);
void colocar_palabra(char tablero[][13], int nfilas, int number, string pal);
void colocar_palabra_v2(char tablero[][13], int nfilas, int number, string pal);
void colocar_palabra_v2_ayudante(char tablero[][13], string pal, int f, int c, char direccion);
bool verificar_victoria(string soluciones[], int n, string registro[]);
