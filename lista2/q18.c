#include <stdio.h>
#include <math.h>

int main () {
    unsigned long long int soma = 1;
    unsigned long long int valor = 1;

    for (int i = 1; i <= 60; i++) {
        valor *= 2;
        soma += valor;

    }

    printf("A soma total é: %llu", soma);

    return 0;
}