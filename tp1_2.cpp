#include <stdio.h>

/* Prototipos */
int Cuadrados(int X);
void CuadradosVoid(int *solucion, int Y);

int main(int argc, char *argv[]) {

    // declaracion de variables
    int valor = 7;
    int resultado;
    int *solucion;

    resultado = Cuadrados(valor);

    printf("%d", resultado);
    printf("%d", *solucion);

    return 0;
}

/* Desarrollo de funciones */
int Cuadrados(int X) {
    int resultado;
    return resultado = X * X;
}

void CradradosVoid(int *solucion, int Y) {
    *solucion = Y * Y;
}