#include <stdio.h>
//crear un progama C qeu permita guaradr la edad de una perssona en una varriable 
//luego modificala a atraves de un puntero y mostrar el valor modifiacdo en pantalla
//y guardar la segunda edad de otra persona usando el mismo puntero
//para despues modificarla y mostar el valor modificado en pantalla

//oqeu el usuario sea capas de elegir que persona quiere modificar a edad
//por medio del puntero

int main(){
    int edad1 = 0;
    int edad2 = 0;
    int punteroEdad = &edad1


    int menu;
        do 
        printf("Menu de Edades\n");
        printf("1. Edad de la pimera Persona\n");
        printf("2. Edad de la segunda persona");
        printf("3. Modificar las edades\n");
        printf("4. Salir\n");
        printf("Seleccione un menu: ");
        scanf("%d", &menu);

        switch (menu){
            case 1:
            
            printf("ingrese la edad de la primera popple");
            scanf("%d, &edad1")
        }




}

