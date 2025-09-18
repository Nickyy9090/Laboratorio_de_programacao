#include <stdio.h>

int main(){
    float x;

    puts("Digite um numero com casas decimais");
    scanf("%f", &x);

    printf("%.1f\n", x);

    return 0;
}