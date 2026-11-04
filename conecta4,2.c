#include <stdio.h>
//codetraint


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
//pone una ficha en el tablero de ambos jugadores
    // jugador 1 = x
    // jugador 2 = O

int ponerFicha(){
    int columna;
    
    if(jugador == 1){
        printf("Jugador 1, ingrese la columna (0-6) para colocar su ficha: ");
        scanf("%d", &columna);
        // Validar la columna ingresada
        if(columna < 0 || columna >= tamanoTableroColumnas){
            printf("Columna invalida. Intente de nuevo.\n");
            return 0;
        }
        // Colocar la ficha en la primera fila disponible de la columna
        for(int i = tamanoTableroFilas - 1; i >= 0; i--){
            if(tablero[i][columna] == ' '){
                tablero[i][columna] = 'X';
                break;
            }
        }
        jugador = 2; // Cambiar al jugador 2 para la próxima vez
    } else {
        printf("Jugador 2, ingrese la columna (0-6) para colocar su ficha: ");
        scanf("%d", &columna);
        // Validar la columna ingresada
        if(columna < 0 || columna >= tamanoTableroColumnas){
            printf("Columna invalida. Intente de nuevo.\n");
            return 0;
        }
        // Colocar la ficha en la primera fila disponible de la columna
        for(int i = tamanoTableroFilas - 1; i >= 0; i--){
            if(tablero[i][columna] == ' '){
                tablero[i][columna] = 'O';
                break;
            }
        }
        jugador = 1; // Cambiar al jugador 1 para la próxima vez
    }
    return 1;
}

int verificarGanador(){

    int direcciones[4][2] = {
        {0, 1},  // Horizontal
        {1, 0},  // Vertical
        {1, 1},  // Diagonal descendente
        {1, -1}  // Diagonal ascendente
    };
    for(int i = 0; i < tamanoTableroFilas; i++){
        for(int j = 0; j < tamanoTableroColumnas; j++){
 
            char ficha = tablero[i][j];
 
            if(ficha == ' '){
                continue;
            }
 
            // Revisar las cuatro direcciones
            for(int d = 0; d < 4; d++){
 
                int contador = 0;
 
                for(int k = 0; k < 4; k++){
 
                    int fila = i + k * direcciones[d][0];
                    int columna = j + k * direcciones[d][1];
 
                    if(fila >= 0 && fila < tamanoTableroFilas &&
                       columna >= 0 && columna < tamanoTableroColumnas &&
                       tablero[fila][columna] == ficha){
 
                        contador++;
                    }
                }
 
                if(contador == 4){
                    return ficha;
                }
            }
        }
    }
 
    return 0;
}
// Verificar si el tablero esta lleno
int tableroLleno(){
    for(int j = 0; j < tamanoTableroColumnas; j++){
        if(tablero[0][j] == ' '){
            return 0;
        }
    }
 
    return 1;
}


int main(){
 
    inicializarTablero();
    mostrarTablero();
 
    while(1){
 
        if(ponerFicha() == 0){
            continue;
        }
 
        mostrarTablero();
 
        int ganador = verificarGanador();
 
        if(ganador == 'X'){
            printf("\n¡ Gano el jugador 1, felicidades shinji!\n");
            break;
        }
 
        if(ganador == 'O'){
            printf("\n¡Gano el jugador 2, felicidades asuka!\n");
            break;
        }
 
        if(tableroLleno()){
            printf("\n¡ Tablas! El tablero estaba lleno.\n");
            break;
        }
    }
 
    return 0;
}
