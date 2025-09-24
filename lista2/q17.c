// Importar as bibliotecas
#include <stdio.h>

int main () {
    // laco de repeticao
    for (int c = 10; c <= 100; c += 10) {
        printf("%dC = %.2fF\n", c, 1.8 * c + 32);

    }
    
    return 0;
}