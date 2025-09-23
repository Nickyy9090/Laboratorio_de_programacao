// Importar as bibliotecas
#include <stdio.h>
#include <math.h>

int main () {
    // Estrutura de repeticao na faixa selecionada
    for (int i = 15; i <= 90; i++) {
        // Fazer a condicao para elevar ao quadrado todos os valores multiplos de 4 na faixa selecionada
        if (!(i % 4)) {
            printf("%d: %.2f\n", i, pow(i, 2));
        }
    }
}