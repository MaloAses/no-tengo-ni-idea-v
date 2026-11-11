#include <stdio.h>

int enteros[5];
int main(){

    float cal1, cal2, cal3, cal4, cal5;
    float calificaciones[5];
    float promedio;

    calificaciones[0] = 0;
    calificaciones[1] = 7;
    calificaciones[2] = 8;
    calificaciones[3] = 9;
    calificaciones[4] = 10;

     printf ("%f", calificaciones [1]);

     for(int i = 0; i < 5; i++) {
        printf ("\n oe Flaco Ingrese su califacacion %d: ", i +1);
        scanf("%f", &calificaciones[i]);
     }
     for ( int i = 0; i < 5; i++){
        printf("calificacion %d: %.2f\n", i + 1, calificaciones[i]);
     }

     promedio = 0;
    for( int i = 0; i < 5; i++) {
        promedio += calificaciones[i];
    }
    promedio/= 5;
    printf("\n  tu promedio es: %.2f\n", promedio);


    if(promedio >= 9.1 && promedio <= 10){
        printf("Hacker Ciberleak\n");
    }
    else if(promedio >= 8.1 && promedio < 9.1){
        printf("\n====mano, pasaste excelente====\n");
    }
    else if(promedio >= 7.1 && promedio < 8.1){
        printf("\n====mano, pasaste apenas====\n");
    }
    else if(promedio >= 6.1 && promedio < 7.1){
        printf("\n====mano, como te lo digo, Reprobaste , risa del gato====\n");
    }
    else{
        printf("\n====que chuchas hisciste oe====\n");
    }
}