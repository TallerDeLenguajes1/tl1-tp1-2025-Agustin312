#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main()
{   
    int *puntero;
    int num;

    num = 5;
    puntero = &num;

    printf("Hola Mundo\n");

    printf("El contenindo del puntero es: %i \n", *puntero);
    printf("La direccion de memoria almacenada por el puntero es: %p\n",puntero);
    printf("La direccion de memoria de la varaible se: %p\n", &num);
    printf("La direccion de memoria del puntero es: %p\n", &puntero);
    printf("El tamaño de momeria utilizado por la variable es: %lu\n", sizeof(num));

    return 0;
}
