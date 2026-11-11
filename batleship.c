#include <stdio.h>

#include <stdlib.h>

int size = 5; 
int TOTAL_BARCOS = 3;

void inicializarTablero(char tablero[size][size]){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
           tablero[i][j]  = '~';
        }
    }
}

void mostrarTablero(char tablero[size][size]){
    printf("    ");
    for(int j = 0; j < size; j++){printf("%d ", j);}
    printf("\n");
    for(int i = 0; i < size; i++){
        printf("%d ", i);
        for (int j = 0; j < size; j++){
            printf("%c ", tablero[j][i]);
        }
        printf("\n");
    }
}

int main(){

    char tableroP1 [size][size];
    char tableroP2 [size][size];
    char tirosP1[size][size];
    char tirosP2[size][size];


    inicializarTablero(tableroP1);
    inicializarTablero(tableroP2);
    inicializarTablero(tirosP1);
    inicializarTablero(tirosP2);


    int barcosRestantesP1 = TOTAL_BARCOS;
    int barcosRestantesP2 = TOTAL_BARCOS;
    //=======================================
    // fase 1: colocacion de barcos jugador1
    //=======================================
    printf("=== Jugador 1: coloca tus %d barcos ===\n", TOTAL_BARCOS);
    for(int i = 0; i < TOTAL_BARCOS; i++){
        int r, c;
        printf ("Posicion del barco %d(fila columna):", i + 1);
        scanf("%d %d", &r, &c);
        if(r >=0 && r < size && c >= 0 && c < size && tableroP1[r][c] == '~'){
            tableroP1[r][c] = 'B';
        }  else {
                printf("Cordenada invalida o ya ocupada. Intente de nuevo. \n");
                i--;

            }
        }

    //=======================================
    // fase 2: colocacion de barcos jugador2
    //=======================================
    printf("=== Jugador 2: coloca tus %d barcos ===\n", TOTAL_BARCOS);
    for(int i = 0; i < TOTAL_BARCOS; i++){
        int r, c;
        printf ("Posicion del barco %d(fila columna):", i + 1);
        scanf("%d %d", &r, &c);
        if(r >=0 && r < size && c >= 0 && c < size && tableroP2[r][c] == '~'){
            tableroP2[r][c] = 'B';
        }  else {
                printf("Cordenada invalida o ya ocupada. Intente de nuevo. \n");
                i--;

            }
        }
        for(int i = 0; i <  30; i++) printf("\n");

        int turno = 1;
        while(barcosRestantesP1 > 0 && barcosRestantesP2 > 0){
            int r, c;

            if(turno == 1){
                //turno del jugador1
            printf("=== Turno del jugador 1 === \n");
            mostrarTablero(tableroP1);

            printf("Ingresa cordenadas para disparar(fila columna):");
            scanf("%d %d", &r, &c);

            if(r >= 0 && r < size && c >= 0 && c < size ){
                if(tableroP2[r][c]== 'B'){

                    printf("PUUUMMM Le pegaste weee \n");
                    tirosP1[r][c] = 'X';
                    tableroP2[r][c] = 'X';
                    barcosRestantesP2--;
                }else if (tirosP1[r][c] == '~'){
                    printf("no le dite weee \n");
                    tirosP1[r][c] = '0';
                }else {
                    printf("Ya disparaste a esa cordenada. intetnta de nuveo. \n");
                }
            }else{
                printf("Cordenada fuera de rango. intenta de nuevo. \n");
            }
            turno = 2;
            }else if(turno == 2){
                //turno del jugador2
            printf("=== Turno del jugador 2 === \n");
            mostrarTablero(tableroP2);



            printf("Ingresa cordenadas para disparar(fila columna):");
            scanf("%d %d", &r, &c);

            if(r >= 0 && r < size && c >= 0 && c < size ){
                if(tableroP1[r][c]== 'B'){

                    printf("PUUUMMM Le pegaste weee \n");
                    tirosP2[r][c] = 'X';
                    tableroP1[r][c] = 'X';
                    barcosRestantesP1--;
                }else if (tirosP2[r][c] == '~'){
                    printf("no le dite weee \n");
                    tirosP2[r][c] = '0';
                }else {
                    printf("Ya disparaste a esa cordenada. intetnta de nuveo. \n");
                }
            }else{
                printf("Cordenada fuera de rango. intenta de nuevo. \n");
            }

            }else{turno = 1;}
            
                //limpiar tabla de disparos
                for(int i = 0; i <  30; i++) printf("\n");
            }

            // mostar resultado final
            if(barcosRestantesP1 == 0){
                printf("=== Jugador 2 gana === \n");
            }else{
                printf("=== Jugador 1 gana === \n");
                
            }

             //mostrarTablero(tableroP1);
             //mostrarTablero(tableroP2);

            return 0;
        }
