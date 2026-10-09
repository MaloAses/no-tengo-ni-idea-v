#include <stdio.h>

int main(){
    
    /*dara la temperatura en kevin, y tendran que decirle en grados celcius
    si se encuentra entre el 0 y 11 grados celcius, esta congelandose
    si se encuentra entre 12 y 20 grados celcius, es frio
    si se encuentra entre 21 y 30 grados celcius, es templado
    si se encuentra entre 31 y 40 grados celcius, esta caliente
    si se encuentra entre 41 y 50 grados celcius, esta en PeruYorkR

    */

    float Kelvin, Celcius;
    
    printf("Ingresa la temperatura en Kelvin: ");
    scanf("%f", &Kelvin);

    Celcius = Kelvin - 273.15;

    if(Celcius >= 0 && Celcius <= 11){
        printf("Esta congelandose\n");
    }else if(Celcius >= 12 && Celcius <= 20){
        printf("Es frio\n");
    }else if(Celcius >= 21 && Celcius <= 30){
        printf("Es templado\n");
    }else if(Celcius >= 31 && Celcius <= 40){
        printf("Esta caliente\n");
    }else if(Celcius >= 41 && Celcius <= 50){
        printf("Estas en PeruYork\n");
    }

    return 0;
}