#include <stdio.h>
#include <stdlib.h>
#define COLUNM 3
#define ROW 3

int main() {
    const int tam_total = COLUNM * ROW;
    int k;

    int *vet = (int *)malloc(tam_total * sizeof(int));

    if (!vet) 
        return 1;

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUNM; j++) {
            k = i * COLUNM + j;
            *(vet + k) = rand()%10;
            printf("%d ", *(vet + k));

        }
        printf("\n");
    }

    int l;
    int c;
    printf("Linha: ");
    scanf("%d", &l);
    printf("Coluna: ");
    scanf("%d", &c);

    k = l*COLUNM + c;
    printf("vet[%d][%d] = %d\n", l, c, *(vet + k));

    return 0;
}