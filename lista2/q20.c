// Importar as bibliotecas
#include <stdio.h>
#define A 1
#define B 10

int main () {
    // Criar o laco de repeticao no intervalo selecionado
    for (int i = A; i <= B; i++) {

        // Condicional para selecionar os valores impares
        if (i % 2) {
            int fat = 1;
            // Laco de repeticao para valores impares
            for (int c = 1; c <= i; c++) {
                fat *= c;
            }

            printf("%d! = %d\n", i, fat);
        }
    }
    
    return 0;

}