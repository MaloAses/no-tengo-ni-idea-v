#include <stdio.h>

int main()
{
    /*El alumno les dara 4 calificaciones sacar el promedio de las 4 calificaiones mostar en pantalla 
    segun su promedio un mensaje de si panzo, reprobado, paso decente paso excelente
    o si es hacker
    */
   float cal1, cal2, cal3, cal4, promedio;

   printf("Dame tu calificacion; \n");
    scanf("%f", &cal1);
    
     printf("Dame tu calificacion; \n");
    scanf("%f", &cal2);

     printf("Dame tu calificacion; \n");
    scanf("%f", &cal3);

     printf("Dame tu calificacion; \n");
    scanf("%f", &cal4);

    promedio = (cal1 + cal2 + cal3 + cal4) / 4;

    if(promedio >= 8 && promedio <= 9){
        printf("Paso excelente\n");
    }else if(promedio >= 7 && promedio < 8){
        printf("Paso decente\n");
    }else if(promedio >= 6 && promedio < 7){
        printf("Reprobado, risa del gato\n");
    }else if(promedio  >= 9 && promedio < 10){
        printf("Hacker Ciberleak\n");
    }else{
        printf("es el kakaroto\n");
    }

    return 0;
}

