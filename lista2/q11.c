// Importar bibliotecas
#include <stdio.h>
#include <math.h>

int main () {
    int A, B;

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

    // Fazer o laco de repeticao
    for (int i = A; i <= B; i++) {
        // Fazer a condicao para elevar ao quadrado todos os valores multiplos de 4 na faixa selecionada
        if (!(i % 4)) {
            printf("%d: %.2f\n", i, pow(i, 2));
        }
    }

    return 0;
}