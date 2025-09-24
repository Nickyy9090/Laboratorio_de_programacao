#include <string.h>
#include <stdio.h>

int main () {
    int valor;


    while (1) {
        printf("Valor (5 dígitos): ");
        scanf("%d", &valor);

        valor *= (valor > 0)?1:-1;

        if (!((valor >= 10000) & (valor <= 99999))) 
            printf("O valor deve conter apenas 5 digitos!\n");
        else 
            break;
        
    }

    valor *= (valor > 0)?1:-1;

    if (((valor % 10) == (valor / 10000)) & (((valor/1000)%10) == ((valor / 10) % 10)))
        printf("O valor %d e um palindromo!", valor);

    else 
        printf("O valor %d nao e um palindromo", valor);

    return 0;
}
