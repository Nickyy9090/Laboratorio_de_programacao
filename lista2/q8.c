// Importar as bibliotecas
#include <stdio.h>

int main () {
    // Declarar as variaveis
    unsigned int parcela = 0;
    float valor;

    // Receber o valor do produto
    printf("Preco do produto: R$");
    scanf("%f", &valor);

    // Criar while
    while ((valor - 2) > (parcela + 1)) {
        valor -= 2;
        parcela += 1;

    }

    // Mostrar resultados
    printf("Valor de entrada: %f\n", valor);
    printf("Valor da parcela: %u", parcela);

    return 0;
}


