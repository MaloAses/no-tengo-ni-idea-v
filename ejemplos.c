#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        printf("Iteración %d\n", i);
    }
    return 0;
}

#include <stdio.h>

int main() {
    int suma = 0;
    for (int i = 1; i <= 10; i++) {
        suma += i;
    }
    printf("La suma es: %d\n", suma);
    return 0;
}
