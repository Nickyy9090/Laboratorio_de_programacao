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
        // apenas os valores divisiveis por 3
        soma += (!(i % 3)?1:0);

    printf("A quantidade de valores impares no intervalor [%d, %d] e %d", A, B, soma);

    return 0;
}