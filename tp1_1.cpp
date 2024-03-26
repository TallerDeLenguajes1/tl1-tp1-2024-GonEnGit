#include <stdio.h>

int main(int argc, char *argv[]) {

    int numero = 21;
    int *puntero;
    puntero = &numero;

    printf("\nHola, Mundo\n");

    printf("Contenido del puntero: %d\n", *puntero);
    printf("Direccion en el puntero: %p\n", puntero);
    printf("Direccion de la variable: %p\n", &numero);
    printf("Direccion del puntero: %p\n", &puntero);
    printf("Tama%co del puntero: %d bits\n", 164, sizeof(puntero));


    return 0;
}