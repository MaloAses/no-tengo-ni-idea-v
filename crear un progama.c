#include <stdio.h>
//crear un progama C qeu permita guaradr la edad de una perssona en una varriable 
//luego modificala a atraves de un puntero y mostrar el valor modifiacdo en pantalla
//y guardar la segunda edad de otra persona usando el mismo puntero
//para despues modificarla y mostar el valor modificado en pantalla

//oqeu el usuario sea capas de elegir que persona quiere modificar a edad
//por medio del puntero

int main() {
    int edad1, edad2;   
    int *p;             s
    int opcion;
    char seguir = 's';

    printf("Ingresa la edad de la primera perso: ");
    scanf("%d", &edad1);

    p = &edad1;
    printf("\n Modificando la edad de la persona 1 con el puntero.\n");
    printf("Nueva edad: ");
    scanf("%d", p);
    printf("Edad de la perso 1 modificada: %d\n", edad1);

    p = &edad2;
    printf("\nIngresa la edad de la perso 2: ");
    scanf("%d", p);

    printf("Modificando la edad de la perso 2 con el puntero.\n");
    printf("Nueva edad: ");
    scanf("%d", p);
    printf("Edad de la perso 2 modificada: %d\n", edad2);

    while (seguir == 's' || seguir == 'S') {
        printf("\n--- MENU ---\n");
        printf("1. Modificar edad de la persona 1 (actual: %d)\n", edad1);
        printf("2. Modificar edad de la persona 2 (actual: %d)\n", edad2);
        printf("Elige persona: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            p = &edad1;
        } else if (opcion == 2) {
            p = &edad2;
        } else {
            printf("Opcion invalida.\n");
            continue;
        }

        printf("Nueva edad: ");
        scanf("%d", p);  
        printf("Valor modificado: %d\n", *p);

        printf("\n Edades actuales -> Persona 1: %d | Persona 2: %d\n", edad1, edad2);
        printf("Modificar otra? (s/n): ");
        scanf(" %c", &seguir);
    }

    printf("\n Edades finales -> Persona 1: %d | Persona 2: %d\n", edad1, edad2);
    return 0;
}
