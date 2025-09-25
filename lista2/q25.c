// Importar bibliotecas
#include <stdio.h>

int main () {
    // Definir variaveis
    float pi = 4;

    // Laco de repeticao 
    for (int i = 3, cont = 1; i <= 301; i += 2, cont++) {
        // Fazer o calculo
        pi += ((cont % 2) ? -4.0 / i : 4.0 / i);
        
        // Imprimir as aproximacoes
        printf("%.4f\n", pi);
    }

    return 0;
}