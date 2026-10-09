#include <stdio.h>

int main(){
    int opcion;
    do {
        printf("Menú de opcion:\n");
        printf("1. saludar\n");
        printf("2. despedirse\n");
        printf("3. salir\n");
        printf("Elige una opción: ");
        scanf("%d", &opcion);

        if(opcion == 1) {
            printf("¡Hola!\n");
        } else if(opcion == 2) {
            printf("¡Adiós!\n");
        } 
     } while(opcion != 3);

     printf("Has salido del programa.\n");
        return 0;
     }