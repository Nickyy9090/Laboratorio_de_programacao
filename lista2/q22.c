#include <stdio.h>

int main () {
    int cont = 0, valor;

    printf("Valor: ");
    scanf("%d", &valor);

    valor *= (valor < 0)?-1:1;

    while (valor > 0) {
        if (valor % 10 == 7) 
            cont++;
        
        valor /= 10;
    }

    printf("No valor digitado ha %d numeros iguais a 7", valor, cont);

    return 0;
}