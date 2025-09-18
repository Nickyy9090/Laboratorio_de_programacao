#include <stdio.h>

int main() {
    float altJose, altPedro;
    int i = 1;

    do {
        altPedro = 3*i + 110;
        altJose = 2*i + 150;
        i++;

    } while (altJose > altPedro);

    printf("Em %d anos, Pedro sera maior que Jose\n", i);

    return 0;
}   