#include <stdio.h>

int main(){
    int i = 10;
    while(i >= 1 ){
        printf("%d\n", i);
        i--;
    }
}


#include <stdio.h>
int main(){
    int numero;
    printf("Escribe un número (0 para salir): ");
    scanf("%d", &numero);

    while(numero != 0){
        printf("Escribriste el número: %d\n", numero);
        printf("Escribe otro número (0 para salir): ");
        scanf("%d", &numero);
    }
    printf("Has salido de la simulación.\n");
    return 0;
}