#include  <stdio.h>


int main(){}

    /*el usario quire elegir cuanntas calificacines subir para calcular
    su promedio, y el progama le dira si paso o no paso segun su promedio*/

     int cantidadMaterias;
    float calificaciones, promedio;

    printf("Ingrese la cantidad de materias: ");
    scanf("%d", &cantidadMaterias);

    do{
        printf("que quieres saber de tus calificaciones \n");
        printf("1.- calcular promedio de n calificaciones \n");
        printf("2.- calificaciones \n");
        printf("3.- salir \n");
        scanf("%d", &cantidadMaterias);
 
        switch(cantidadMaterias){
            case 1:
                printf(" calcular promedio de n calificaciones \n");
                break;
            case 2:
                printf("calificaciones \n");
                break;
            case 3:
                printf("saliste del menu \n");
                break;
            default:
                printf("salir \n");

                promedio /= cantidadMaterias;
                printf("El promedio es: %.2f \n", promedio);
 
    if(promedio >= 7){
        printf("Felicidades, pasaste con un promedio de %.2f \n", promedio);

        }while(cantidadMaterias != 3);
        }
        return 0;
 }