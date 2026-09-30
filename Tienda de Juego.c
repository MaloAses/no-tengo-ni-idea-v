#include <stdio.h>

int main(){

    /*Ejercicio 3: Tienda de Juegos
    Una tienda mayorista de videojuegos, quiere comprar N cantidad de videojuegos, con un precio
que ellos indiquen, quieren en un desgloce de precios de:
el precio del videojuego individual, cantidad de unidades compradas
el descuento del 15% que tienen por ser mayoristas
como el 16% de iva que estan pagando
junto con el total del precio*/


    int cantidad;
    float precioVideojuegos, subtotal, descuento, iva, total;

    printf("Ingresa la cantidad de videojuegos: ");
    scanf("%d", &cantidad);

    printf("Ingresa el precio unitario del videojuego: ");
    scanf("%f", &precioVideojuegos);

    subtotal = cantidad * precioVideojuegos;
    descuento = subtotal * 0.15;         // 15% de descuento por ser mayorista
    iva = (subtotal - descuento) * 0.16; // 16% de IVA sobre el precio con descuento
    total = (subtotal - descuento) + iva;

    printf("\n========== DESGLOSE DE PRECIOS ==========\n");
    printf("Precio videojuegos:          $%.2f\n", precioVideojuegos);
    printf("Cantidad comprada:        %d\n", cantidad);
    printf("Subtotal:                 $%.2f\n", subtotal);
    printf("Descuento (15%%):          $%.2f\n", descuento);
    printf("IVA (16%%):                $%.2f\n", iva);
    printf("TOTAL A PAGAR:            $%.2f\n", total);
    printf("=========================================\n");

    return 0;
}