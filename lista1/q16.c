#include <stdio.h>

int main(){
    int valor;

    printf("Valor: ");
    scanf("%d", &valor);

    printf("Valor absoluto: %d", (valor>=0)?valor:-1*valor);

    return 0;
}