#include <stdio.h>

/* Prototipos */
int Cuadrados(int X);
// la funcion... funciona... aun si Y no es un puntero
void CuadradosVoid(int *, int Y);
void invertir(int *, int*);
void orden(int *, int *);

int main(int argc, char *argv[])
{
    // declaracion de variables
    int valor = 7;
    int solucion;
    int resultado;
    int primero;
    int segundo;
    int primeroCopia;
    int segundoCopia;

    // cuerpo
    resultado = Cuadrados(valor);
    CuadradosVoid(&solucion, valor);

    printf("\n/----Funciones para calcular cuadrados (4a y b)----/\n");
    printf("Cuadrado con return: %d\n", resultado);
    printf("Cuadrado sin return: %d", solucion);
    printf("\n/--------------------------------------------------/\n");
    printf("\n/----Valor y direccion (4c)----/\n");
    printf("Valor de la variable: %d\n", valor);
    printf("Direccion de la variable: %p", &valor);
    printf("\n/------------------------------/\n\n");

    printf("/----Invertir y Ordenar----/\n");
    printf("Ingrese un numero entero: ");
    scanf("%d", &primero);
    printf("Ingrese otro numero entero: ");
    scanf("%d", &segundo);

    // si invertis los valores primero, cuando invocas 'orden()'
    // ya no son los mismos valores que se ingresan...
    // tendrias que copiarlos y ordenar las copias
    primeroCopia = primero;
    segundoCopia = segundo;

    printf("\nIngresaste los numeros: A = %d y B = %d.\n", primero, segundo);

    // usas las variables en el mismo orden, solo les cambias los valores
    invertir(&primero, &segundo);
    printf("Invertidos: A = %d, B = %d\n", primero, segundo);

    orden(&primeroCopia, &segundoCopia);
    printf("De menor a mayor: %d, %d", primeroCopia, segundoCopia);

    printf("\n/--------------------------/\n\n");

    return 0;
}

/* Desarrollo de funciones */
int Cuadrados(int X)
{
    int resultado;
    return resultado = X * X;
}

// el unico error era que escribiste Cradrados... nabo...
void CuadradosVoid(int *solucion, int Y)
{
    int cuad = Y * Y;

    *solucion = cuad;
}

void invertir(int *prim, int *seg)
{
    int auxiliar;

    auxiliar = *seg;
    *seg = *prim;
    *prim = auxiliar;
}

// si vas a hacer por referencia, TODO se hace por referencia
void orden(int *prim, int *seg)
{
    int auxiliar;
    // si estan en orden (A < B) no tenes que hacer nada, controlas el otro caso
    if (*prim > *seg)
    {
        auxiliar = *seg;
        *seg = *prim;
        *prim = auxiliar;
    }
}