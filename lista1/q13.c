#include <stdio.h>

int main(){
    float temp;

    printf("Temperatura em graus Celsius: ");
    scanf("%f", &temp);

    printf("Convertendo para Fahrenheit...\n");
    printf("------------------------------\n");
    printf("%.2fF", (9*temp + 160)/5);

    return 0;
}