// Importar as bibliotecas
#include <stdio.h>
#include <math.h>

int main () {
    // Laco de repeticao
    for (int c1 = 1; c1 <= 500; c1++) {
        for (int c2 = 1; c2 <= 500; c2++) {
            int resultado = c1*c1 + c2*c2; 
            if ((500 >= sqrt(resultado))&&((int) sqrt(resultado) == sqrt(resultado)))
                printf("(%d, %d, %d)\n", (int) sqrt(resultado), c1, c2);

        }
    }
    

    return 0;
}
        