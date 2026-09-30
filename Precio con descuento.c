#include <stdio.h>

int main(){
    /*Ejercicio 2: Precio con Descuento
    Solicitar al cliente el precio de su producto, para aplicarle un 23% de descuento
    Mostrando en pantalla el precio del producto original, con el descuento aplicado
    y cuanto fue el descuento
    */

    float precio, descuento, precioFinal;

    printf("Ingresa el precio del producto: ");
    scanf("%f", &precio);

    descuento = precio * 0.23;           // 23% de descuento
    precioFinal = precio - descuento;

    printf("\n--- Resultado ---\n");
    printf("Precio original:     $%.2f\n", precio);
    printf("Descuento (23%%):    $%.2f\n", descuento);
    printf("Precio con descuento: $%.2f\n", precioFinal);

    return 0;
}