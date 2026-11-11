#include <stdio.h>

int main(){
    //variasble que aputa a otra
    int edad = 17;
    int edad = 20;
    int *punteroEdad2 = &edad;

    printf("valor de edad antes de modificar: %d\n", edad);
    printf("direccion de memoria de la variable edad: %p\n", edad);
    printf(" direccion de memoria alamcenada en el puntero: %p\n", punteroEdad);


    punteroEdad = &edad2;
    *punteroEdad = 21;

    printf(" valor d edad despues de modificar: %d\n", edad2);
    scanf("%d, ")

    return 0;
}