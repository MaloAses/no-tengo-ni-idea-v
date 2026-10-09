#include <stdio.h>

int main()
{
    //Area de un Cubo
    float lado, area;

    printf("Ingresa el lado del cubo: ");
    scanf("%f", &lado);

    area = 6 * lado * lado;   // Área total = 6 * lado²

    printf("El área total del cubo es: %.2f\n", area);

    return 0;
}