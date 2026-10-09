#include <stdio.h>

int main() {
    int opcion;

    do {
        printf("\n========== MENU DE EJERCICIOS ==========\n");
        printf("1. Promedio de calificaciones de N materias\n");
        printf("2. Uso de IF y ELSE IF\n");
        printf("3. Teorema de Pitagoras\n");
        printf("4. Salir\n");
        printf("========================================\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
            {
                int cantidadMaterias;
                float calificacion, promedio = 0;

                printf("\n--- Promedio de calificaciones ---\n");
                printf("Ingrese la cantidad de materias: ");
                scanf("%d", &cantidadMaterias);

                if (cantidadMaterias <= 0) {
                    printf("La cantidad de materias debe ser mayor a 0.\n");
                    break;
                }

                for(int i = 0; i < cantidadMaterias; i++){
                    printf("Ingrese la calificacion %d: ", i + 1);
                    scanf("%f", &calificacion);
                    promedio += calificacion;
                }

                promedio /= cantidadMaterias;
                printf("El promedio es: %.2f\n", promedio);

                if(promedio >= 7){
                    printf("Felicidades, pasaste con un promedio de %.2f\n", promedio);
                } else {
                    printf("Reprobaste con un promedio de %.2f\n", promedio);
                }
                break;
            }

            case 2:
            {
                float cal1, cal2, cal3, cal4, promedio;

                printf("\n--- Uso de IF y ELSE IF ---\n");

                printf("Dame tu calificacion 1: ");
                scanf("%f", &cal1);

                printf("Dame tu calificacion 2: ");
                scanf("%f", &cal2);

                printf("Dame tu calificacion 3: ");
                scanf("%f", &cal3);

                printf("Dame tu calificacion 4: ");
                scanf("%f", &cal4);

                promedio = (cal1 + cal2 + cal3 + cal4) / 4;

                printf("\nTu promedio es: %.2f\n", promedio);

                if (promedio >= 9 && promedio <= 10) {
                    printf("Hacker Ciberleak\n");
                }
                else if (promedio >= 8 && promedio < 9) {
                    printf("Paso excelente\n");
                }
                else if (promedio >= 7 && promedio < 8) {
                    printf("Paso decente\n");
                }
                else if (promedio >= 6 && promedio < 7) {
                    printf("Reprobado, risa del gato\n");
                }
                else {
                    printf("es el kakaroto\n");
                }
                break;
            }

            case 3:
            {
                float a, b, c2;

                printf("\n--- Teorema de Pitagoras ---\n");
                printf("Ingrese el valor del cateto a: ");
                scanf("%f", &a);
                printf("Ingrese el valor del cateto b: ");
                scanf("%f", &b);

                c2 = (a * a) + (b * b);

                printf("\nSegun el Teorema de Pitagoras:\n");
                printf("a^2 + b^2 = c^2\n");
                printf("%.2f^2 + %.2f^2 = %.2f\n", a, b, c2);
                printf("El cuadrado de la hipotenusa (c^2) es: %.2f\n", c2);
                break;
            }

            case 4:
                printf("\nSaliendo del programa... ¡Hasta luego!\n");
                break;

            default:
                printf("\nOpcion no valida. Por favor elija una opcion del 1 al 4.\n");
                break;
        }

    } while (opcion != 4);

    return 0;
}