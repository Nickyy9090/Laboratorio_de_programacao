// Importar bibliotecas 
#include <stdio.h>

int main () {
    // Declarar variaveis
    int x = 1;

    // Iniciar o valor 1
    printf("%d\n", x);

    // Criar o laco for iniciando do zero 
   for (int i = 0, y = 0; i <= 20; i++) {

        // Trocar as variaveis mediante XOR 
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;

        // Realizar as operacoes
        x += y;

        // Mostrar resultado
        printf("%d\n", x);

   }

    return 0;
}

