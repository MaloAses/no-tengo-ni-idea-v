#include <stdio.h>

int main() {
    int menu;

    do {
        printf("Menu de Ejercicoios \n");
        printf("1. Promedio de calificaciones de N cantidad de materias\n");
        printf("2. Uso del IF y ELSE IF\n");
        printf("3. Teorema de Pitagoras\n");
        printf("4. Salir\n");
        printf("Seleccione un menu: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
            {
                int cantidadMaterias;
                float calificacion, promedio = 0;

                printf("Promedio de calificaciones \n");
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
                    printf("pasaste weee con promedio de %.2f\n", promedio);
                } else {
                    printf("Reprobaste, Envia RATA al 40400 %.2f\n", promedio);
                }
                break;
            }

            case 2:
            {
                float cal1, cal2, cal3, cal4, promedio;

                printf(" Uso del IF y ELSE IF \n");

                printf("Dame la calificacion 1: ");
                scanf("%f", &cal1);

                printf("Dame la calificacion 2: ");
                scanf("%f", &cal2);

                printf("Dame la calificacion 3: ");
                scanf("%f", &cal3);

                printf("Dame la calificacion 4: ");
                scanf("%f", &cal4);

                promedio = (cal1 + cal2 + cal3 + cal4) / 4;

                printf("\n Tu promedio es: %.2f\n", promedio);

                if (promedio >= 9 && promedio <= 10) {
                    printf("Hacker, eres Ciberleak\n");
                }
                else if (promedio >= 8 && promedio < 9) {
                    printf("Pasaste con excelencia wee\n");
                }
                else if (promedio >= 7 && promedio < 8) {
                    printf("Pasastes decente wee, ponte verga \n");
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

                printf(" Teorema de Pitagoras \n");
                printf("Ingrese valor de cateto a: ");
                scanf("%f", &a);
                printf("Ingrese valor de cateto b: ");
                scanf("%f", &b);

                c2 = (a * a) + (b * b);

                printf("\n Teorema de Pitagoras:\n");
                printf("a^2 + b^2 = c^2\n");
                printf("%.2f^2 + %.2f^2 = %.2f\n", a, b, c2);
                printf("El cuadrado de la hipotenusa (c^2) es: %.2f\n", c2);
                break;
            }

            case 4:
                printf(" cerrando progama, no hubo renovacion :v\n");
                break;

            default:
                printf(" Opcion no valida. escoge del 1 al 4 o vete a tomar por cul...\n");
                break;
        }

    } while (menu != 4);

    return 0;
}