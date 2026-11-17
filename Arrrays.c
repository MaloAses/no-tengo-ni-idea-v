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
         printf ("Ingrese la calificación %d: ", i + 1);
         scanf("%f", &calificaciones[i]);
     }
     for (int i = 0; i < 5; i++){
        printf("calificacion %d: %.2f\n", i + 1, calificaciones[i]);
     }

     promedio = 0;
     for( int i = 0; i < 5; i++) {
        promedio += calificaciones[i];
     }
     promedio/= 5;
     printf("\n  tu promedio es: %.2f\n", promedio);


     return 0;
 } 
 