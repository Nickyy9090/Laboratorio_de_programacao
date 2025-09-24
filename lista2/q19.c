// Importar bibliotecas
#include <stdio.h>

int main () {
    // Declarar variaveis
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

    // Laco pra calcular a soma
    for (int i = A; i <= B; i++) {
        soma += i;

    }

    // Imprimir o valor da media
    printf("Media no intervalo: %.2f", (float) soma/((B - A) + 1));
    
    return 0;    
}