#include <stdio.h>

int main(){
    int i = 1;
    do{
        printf("%d\n", i);
        i++;
    }while(i <= 10);

    return 0;
}


#include <stdio.h>

int main(){
    int opcion;
    do {
        printf("Menú de opciones:\n");
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
