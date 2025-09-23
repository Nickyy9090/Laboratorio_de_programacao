// Importar bibliotecas
#include <stdio.h>

int main () {
    int v;
    
    // Receber o inteiro
    printf("Valor: ");
    scanf("%d", &v);

    // Adicao
    printf("== Adição ==\n");
    for (int i = 0; i <= 10; i++){
        printf("%d + %d = %d\n", v, i, v + i);

    }

    printf("\n\n");

    // Subtraçao 
    printf("== Subtração ==\n");
    for (int i = 0; i <= 10; i++){
        printf("%d - %d = %d\n", v, i, v - i);

    }
    
    printf("\n\n");

    // Multiplicacao
    printf("== Multiplicação ==\n");
    for (int i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", v, i, v * i);

    }

    printf("\n\n");

    // Divisao
    printf("== Divisão ==\n");
    for (int i = 1; i <= 10; i++){
        printf("%d / %d = %d, resto: %d\n", v, i, v / i, v % i);

    }
    
    return 0;
}