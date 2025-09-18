#include <stdio.h>

int main(){
    int x;

    puts("Escreva um numero x: ");
    scanf("%d", &x);

    printf("3x = %d\n", 3*x);
    printf("x*x = %d\n", x*x);
    printf("x/2 = %.1f\n", x/2.0);

    return 0;
}