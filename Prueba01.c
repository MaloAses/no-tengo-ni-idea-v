#include <stdio.h>

int main(){
    int num;
    int altura;
    int area = 0;
    
    printf("Dame la base \n");
    scanf("%d", &num);
    printf("Dame la altura \n");
    scanf("%d", &altura);
    area = num * altura / 2;
    
    printf("%d, %d", num, altura);
    printf("La base de tu triangulo es: %d", area);
    
    return 0;
}