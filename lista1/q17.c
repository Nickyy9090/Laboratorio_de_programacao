#include <stdio.h>

int main(){
    float raio;

    printf("Raio: ");
    scanf("%f", &raio);

    printf("Diametro: %f\n", raio*2);
    printf("Circuferencia: %f\n", 2*raio*3.14159);
    printf("Area: %f\n", 3.14159*raio*raio);

    return 0;
}