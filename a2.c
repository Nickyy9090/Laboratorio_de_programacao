#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COLUNM 3

int main() {
    int **vet = (int **)malloc(ROW * sizeof(int));

    if (!vet) {
        printf("Falha ao alocar");
        return 1;
    }

    // Para cada elemento do array de ponteiros ele cria uma alocacao
    for (int i = 0; i < ROW; i++) {
        *(vet + i) = (int *)malloc(COLUNM * sizeof(int));
    
        if (!(*(vet + i))){
            for (int j = 0; j < i; j++) {
                free(*(vet + i)); // Recebe um ponteiro e limpa o bloco de memoria pre-alocado
            }
            free(vet);
            return 1;
        }
    }

    // Preencher os espacos alocados
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUNM; j++) {
            *(*(vet + i) + j) = rand()%10;
        
        }
    }

    // Printa o vetor
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUNM; j++) {
            printf("%d ", *(*(vet + i) + j));
        
        }
        printf("\n");
    }

    int l;
    int c;
    printf("Linhas: ");
    scanf("%d", &l);
    printf("Colunas: ");
    scanf("%d", &c);

    // Localizar o valor digitado pelo usuario
    int valor = *(*(vet + l) + c);
    printf("O valor digitado foi: %d\n", valor);

    return 0;
}