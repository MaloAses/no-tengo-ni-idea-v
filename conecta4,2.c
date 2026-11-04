#include <stdio.h>
//codetraint


int tamanoTableroColumnas = 7;
int tamanoTableroFilas = 8;

char tablero[8][7];

void inicializarTablero(){
    for(int i = 0; i < tamanoTableroFilas; i++){
        for(int j = 0; j < tamanoTableroColumnas; j++){
            tablero[i][j]= ' ';
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
//poneruna ficha en el tablero de ambos jugadores
    //jugador 1 = x
    //jugador 2 = 0

void ponerFicha(){
    int columna;
    
    if(jugador == 1){
        printf("Jugador 1, ingrese la columna (0-6) para colocar su ficha: ");
        scanf("%d", &columna);
        // Validar la columna ingresada
        if(columna < 0 || columna >= tamanoTableroColumnas){
            printf("Columna invalida. Intente de nuevo.\n");
            return;
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
            return;
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
}

int main(){
    inicializarTablero();
    mostrarTablero();
    for(int i = 0; i < 6; i++){
        ponerFicha();
        mostrarTablero();
    }
      
    return 0; 
}
