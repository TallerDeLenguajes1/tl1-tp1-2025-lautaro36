#include <stdio.h>

int main () {
    int *puntero, num=100;
    puntero = &num;
    printf("hola mundo");

    printf("\nContenido del puntero: %d", *puntero);
    printf("\nDireccion almacenada en el puntero: %p", puntero);
    printf("\nDireccion de la variable: %p", &num);
    printf("\nDireccion del puntero: %p", &puntero);
    printf("\nTamanio ocupado por la variable: %d", sizeof(int));
    
    return 0;

}