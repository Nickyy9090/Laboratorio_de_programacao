#include <stdio.h>

int main(){
    int f, fat=1;

    while (1) {
        printf("Numero: ");

        if (scanf("%d", &f) != 1) {
            printf("Entrada invalida, digite apenas numeros positivos.\n");
            while(getchar() != '\n');

        } else if (f < 0) {
            printf("Digite apenas numeros positivos.\n");

        } else {
            break;

        }
    } 

    for (int i = 1; i <= f; i++) {
        fat *= i;
    }

    printf("%d! = %d", f, fat);

    return 0;
}