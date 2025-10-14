#include <stdio.h>

int CuboValor(int n);
void CuboRef(int *n);

int main () {
    int valor = 5;

    printf("Cubo por valor: \n");
    int resp = CuboValor(valor);
    printf("Valor antes: %d\nValor depois: %d\n", valor, resp);

    printf("\n");

    printf("Cubo por referencia: \n");
    printf("Valor antes: %d\n", valor);
    CuboRef(&valor);
    printf("Valor depois: %d\n", valor);


    return 0;
}

int CuboValor(int n) {
    return n*n*n;
}

void CuboRef(int *n){
    *n = *n * *n * *n;
}