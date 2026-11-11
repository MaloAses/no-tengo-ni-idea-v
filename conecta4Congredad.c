#include <stdio.h>
#include <unistd.h>
 
//conecta 4 en C
 
int tamanoTableroColumnas = 7;
int tamanoTableroFilas = 8;
 
char tablero[8][7];
int jugador = 1; // Alternar entre jugador 1 y jugador 2
 
void inicializarTablero(){
    for(int i = 0; i < tamanoTableroFilas; i++){
        for(int j = 0; j < tamanoTableroColumnas; j++){
            tablero[i][j] = ' ';
        }
    }
}
 
void mostrarTablero(){
    for(int i = 0; i < tamanoTableroFilas; i++){
        for(int j = 0; j < tamanoTableroColumnas; j++){
            printf("|%c", tablero[i][j]);
        }
        printf("|\n");
    }
}
//poner fichas en el tablero de ambos jugadores
    // Jugador 1 = X
    // Jugador 2 = O
 
void ponerFicha(){
    int columna;
    char fichaActual = (jugador == 1) ? 'X' : 'O';

    printf("Jugador %d, ingrrese la columna (0-6) para colocar su ficha: ", jugador);
    scanf("%d", &columna);
}

int filaDestino = -1;
for (int i = tamano TableroFilas - 1; i >= 0; i--){
    if(tablero[i][columna]== ' '){
        filaDestino = i;
        break;
    }


    if(filaDestino == -1){
        printf("Columna llena. Intente de nuevo.\n");
        return;
    }
}

for (int i = 0; i < filaDestino; i++){

     tablero[i][columna] = fichaActual;

     
     mostrarTablero();


     usleep(100000);

     if(i < filaDestino - 1){
        tablero[i][columna] = ' ';
     }

}
if(jugador == 1){
    jugador = 2;
} else {
    jugador = 1;
}

int verificarGanador(char ficha){
    for (int i = 0; i < tamanoTableroFilas; i++){
        for (int j = 0; j < tamanoTableroColumnas - 3; j++){
           if (tablero[i][j] == ficha &&
               tablero[i][j + 1] == ficha &&
               tablero[i][j + 2] == ficha &&
               tablero[i][j + 3] == fichas){
                return 1;
               }
        }
    }
}   for (int)


int verificarGanador(char ficha) {

    for (int i = 0; j < tamanoTableroFilas - 3; i++) {
        for (int j =0; j < tamanoTableroColumnas - 3; j++) {
            if (tablero[i][j] == ficha &&
                tablero[i + 1][j + 1] == ficha &&
                tablero[i + 2][j + 2] == ficha && 
                tablero[i + 3][j + 3] == ficha &&){
                    return 1;
                }
        }
    }

    for (int i = 3; i <  tamanoTableroFilas; i++){
        for (int j = 0; j < tamanoTableroColumnas - 3; j++){

        }
    }
}
 
 
int main(){
    // Inicializar el tablero y mostrarlo
    //prueba de codigo
    inicializarTablero();
    int turnosTotales = tamanoTableroColumnas * tamanoTableroFilas;
    int juegoTerminado = 0;

    mostrarTablero();

    for (int i = 0; i < turnosTotales && !juegoTerminado; i++){
       ponerFicha();


       if(veificarGanador('X')) {
        printf("\n Gano el player1 \n");
        juegoTerminado = 1;
       }
    }


    else if (verificarGanador('O')){
        printf("\n Gano el player 2 \n");
        juegoTerminado = 1;
    }
     if (! juegoTerminado){
        printf("\n Empataron wee")
     }

    return 0;
}