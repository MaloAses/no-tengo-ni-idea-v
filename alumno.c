#include <stdio.h>

int main(){

    float cal1, cal2, cal3, promedio;

    printf("Dame tu calificacion; \n");
    scanf("%f", &cal1);
    
     printf("Dame tu calificacion; \n");
    scanf("%f", &cal2);

     printf("Dame tu calificacion; \n");
    scanf("%f", &cal3);

    promedio = (cal1 + cal2 + cal3)/3;
     
    if(promedio >= 7){
         printf("pasaste weee \n");
    }else{
        printf("llama.... ");
    }
   

    
    return 0;
}