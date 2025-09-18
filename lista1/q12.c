#include <stdio.h>

int main(){
    int a, b;

    printf("Valor de A: ");
    scanf("%d", &a);

    printf("Valor de B: ");
    scanf("%d", &b);

    a ^= b;
    b ^= a;
    a ^= b;

    printf("A = %d\n", a);
    printf("B = %d", b);

    return 0;
}