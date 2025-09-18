#include <stdio.h>

int main(){
    int x, n, prod;

    printf("x: ");
    scanf("%d", &x);
    
    printf("n: ");
    scanf("%d", &n);

    prod = x << n;

    printf("x * 2^(n) = %d", prod);

    return 0;
}