#include <stdio.h>

/* Prototipos */
int Cuadrados(int x);

int main(int argc, char *argv[]) {

    int resultado;

    resultado = Cuadrados(5);

    printf("%d", resultado);

    return 0;
}

/* Desarrollo de funciones */
int Cuadrados(int x) {
    int resultado;

    return resultado = x * x;
}