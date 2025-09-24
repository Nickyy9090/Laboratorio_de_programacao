#include <stdio.h>

int main () {
    int valor = 10;

    printf("X: %d\n", valor);
    printf("Pos incremento (X--): %d\n", valor--);
    printf("Valor de X agora: %d\n", valor);
    printf("Pre incremento (--X): %d\n", --valor);
    printf("Valor de X agora: %d\n", valor);

    return 0;
}