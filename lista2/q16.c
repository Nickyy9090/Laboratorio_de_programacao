#include <stdio.h>

int main () {
    // Declarar as variaveis
    int soma5 = 0, soma3 = 0;

    // Criar o laco de repeticao
    for (int i = 0; i <= 200; i++) {
        // Condicao para i > 100
        if (i > 100) 
            // Somar multiplos de 5
            soma5 += (!(i % 5)?i:0);

        else
            // Somar multiplos de 3
            soma3 += (!(i % 3)?i:0);
        }
    
    // Imprimir valores
    printf("Somatorio dos valores multiplos de 5 no intervalor ]100, 200]: %d\n", soma5);
    printf("Somatorio dos valores multiplos de 3 no intervalor [0, 100]: %d\n", soma3);
    
    return 0;
}