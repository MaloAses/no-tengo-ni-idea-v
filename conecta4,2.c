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
    int jugador = 1;
    if(jugador == 1){
        printf("jugador 1, ingrese la columna (0,6) para colocar su ficha. ");
        scanf("%d", &columna);
        //validar la columna ingresada
    if(columna < 0 || columna >= tamanoTableroColumnas){
        return;
    }
    //colocar la ficha en la primera fila disponible de lacolumna
    for(int i = tamanoTableroFilas - 1; i>= 0; i--){
        if(tablero[i][columna] == ' '){
            tablero[i][columna] = 'X';
            break;
        }   
    }
     jugador = 2;
    }else {
        printf(" jugador 2, ingrese la columna (0,6) para colocar su ficha:");
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