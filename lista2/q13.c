// Importar bibliotecas
#include <stdio.h>
#include <math.h>

int main () {
    int A, B, soma = 0;

    // Pedir o intervalor de A e de B
    printf("Faixa [A, B]: ");
    scanf("%d %d", &A, &B);

    // Fazer a codicao 
    if (A > B) {
         // Usar a operacao de troca
         A ^= B;
         B ^= A;
         A ^= B;
    }

    // Fazer a estrutura de repeticao
    for (int i = A; i <= B; i++)
        // apenas os valores pares
        soma += (!(i % 2)?i:0);

    printf("A soma dos valores pares no intervalo [%d, %d] e %d", A, B, soma);

    return 0;
}