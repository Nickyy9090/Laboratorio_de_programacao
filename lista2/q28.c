#include <stdio.h>

int main () {
    // Declarar as variaveis 
    unsigned char valor = 12;
    unsigned char referencial = 9;


    // Criar a marcara
    unsigned char mask;

    // Laco de repeticao for -> i <= referencial
    for (int i = (referencial - 4); i <= (referencial + 4); i++) {
 
        // Se o i for diferente do referencial
        if (i != referencial) {
            // Definir a mask 
            mask = 0x01;

            // Aplicar uma and entre a mascara e o valor e guardar na mascara
            mask &= valor;

            // Atualizar o valor deslocando ele 1 vez pra direita
            valor = valor >> 1;

            // Aplicar uma and entre a mascara e o valor anterior de x
            if (mask & 0x01)
                printf("%d\n", i | 0x01);
            
            else
                printf("%d\n", i & ~(0x01)); 

        }
    }    


    return 0;
}