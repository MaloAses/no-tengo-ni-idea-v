#include <stdio.h>
#include <stdlib.h>
// objetivo aprender a almacenar; recorrery analizar datos utilizando una matriz bidimencional

//Una tienda nesecita registrar las ventas de 4 productos durante 4 dias.
// desarrolla un progama en c que almacene las ventas en una matriz y muestre un reporte sencillo

//1. Declarar una matriz de tipo int de 4 filas y 4 columnas
//2. Solicitar al usuario las ventas de cada producto durante los 4 dias
//3. Mostrar la matriz completa en forma de tabla
//4. Calcular y mostrar el total de ventas de cada producto
//5. Calcular y mostrar el total de ventas de todos los productos

int productos, dias, ventas, precio;
int total_ventas;
int size = 4;



void inicializarTabla(char Tabla[size][size]){
    for(int z = 0; z < size; z++){
        for(int y = 0; y < size ; y++){
             Tabla[y][z] = 0;
        }
    }
}

void mostrarTabla(char Tabla[size][size]){
    printf("    ");
    for(int y = 0; y < size; y++){printf("%d ", y);}
    printf("\n");
    for(int z = 0; z < size; z++){
        printf("%d ", z);
        for (int y = 0; y < size; y++){
            printf("%c ", Tabla[y][z]);
        }
        printf("\n");
    }
}


int main(){
    char Tabla[size][size];
    inicializarTabla(Tabla);
    printf("\n===== Tienda: regristo de ventas \n====");
    scanf("%d", &ventas);

    printf("\n Ingrese el dia y el producto que quiera registar la venta(Dia de la venta: \n 0 = lunes , 1 = martes, 2 = miercole, 3 = jueves: \n=====)")
    scanf("%d %d", &dias, &productos);

    Tabla[dias][productos] = ventas

    

    





}




