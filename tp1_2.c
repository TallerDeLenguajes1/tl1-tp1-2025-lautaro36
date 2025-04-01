//tl1-tp1-2024-lautaro36
#include <stdio.h>

//int cuadrado(int num); 
void cuadrado(int num); 
void invertir(int a, int b);
void orden(int a, int b);

int main() {
        int num, a, b;
        printf("Ingrese un numero:");
        scanf("%d", &num);
        printf("\nDireccion de la variable y su contenido: %p y %d", &num, num);
        //printf("El cuadrado del numero es: %d", cuadrado(num));
        cuadrado(num);

        printf("\nIngrese un numero a:");
        scanf("%d", &a);
        printf("\nIngrese un numero b:");
        scanf("%d", &b);

        invertir(a, b);
        orden(a,b);

        return 0;

}

void cuadrado(int num) {
        printf("\nEl cuadrado de numero es: %d ", num*num);
}

void invertir(int a, int b) {
        int aux=a;
        a=b;
        b=aux;
        printf("\nAhora a = %d y b = %d", a, b);
}

void orden(int a, int b) {
        int aux=a;
        if(a>b) {
                a=b;
                b=aux;
        }
        printf("\nel mayor %d, el menor es %d", b,a);
}

/* int cuadrado(int num) {
    return num*num;
} */