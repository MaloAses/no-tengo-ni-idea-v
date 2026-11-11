#include <stdio.h>


 /*1.declarar un areglo de tipo int con espacio de 10 numeos enteros
 2.solicitar al usuario que ingrese 10 numeros enteros y almacenarlos en el areglo
 3.mostrar todos los  numeros en el orden en que fueron ingresados
 4.encontar y mostar el numero mas grande y el mas pequeño del orden
 5.calcular la suma de todos los numeros almacenados 

 6.solicitar un numero al usuario y buscarlo en el arreglo, si se encuentra
 7.si el numero aparece varias veces, indicar todas las posiciones en las que se encuentra
 8.mostar el areglo en oreden inverso, desde el ultimo elemento hasta el primero1
 si no aparece, mostrar un mensaje indicando que no se encontro el numero
 */


int main (){

    int numeros[10];
    for(int i = 0; i < 10; i++){
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    for(int i = 9; i >= 0; i--){
        printf("El numero %d es: %d\n", i + 1, numeros[i]);
    }
    
    int suma = 0;
    for(int i = 0; i < 10; i++){
        suma += numeros[i];
    }
    printf("La suma de todos los numeros es: %d\n", suma); 

    int numeroABuscar;
    printf(" ingrese el numero A BUSCAR:");
    scanf("%d", &numeroABuscar);

    for(int i = 0; i < 10; i++){
        if(numeros[i] == numeroABuscar){
            printf("El numero %d se encuentra en la posicion %d\n", numeroABuscar, i);
        }
    }


    return 0;

}