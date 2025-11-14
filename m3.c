#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void AlocarVetor(int **, int);
void PopularVetor(int *const *const, int);
void PrintarVetores(int *const *const, const int);
void SomaDiagonal(int *const *const, const int, int *, int (*S)(int *const *const, const int));
int SomaDiagonalP(int *const *const, const int);
int SomaDiagonalS(int *const *const, const int);

int main(int argc, char **argv) {

    if (argc != 2) {
        printf("Erro! insira a quantidade de argumentos valida");
        exit(1);
    }

    // Captura a dimensao
    int dim = atoi(*(argv + 1));

    // Alocar a memoria
    int **arr = (int **)malloc(dim * sizeof(int *));

    if (!arr) {
        free(arr);
        exit(2);
    }
       
    AlocarVetor(arr, dim);

    srand(time(NULL));
    PopularVetor(arr, dim);

    PrintarVetores(arr, dim);

    int flag;
    printf("Soma diagonal principal (1)\nSoma diagonal secundaria (0)\n");
    scanf("%d", &flag);

    int soma;
    if (flag) {
        SomaDiagonal(arr, dim, &soma, SomaDiagonalP);
        printf("Soma diagonal principal: %d\n", soma);
    } else {
        SomaDiagonal(arr, dim, &soma, SomaDiagonalS);
        printf("Soma diagonal secundaria: %d\n", soma);
    }

    free(arr);
    
    return 0;
}

// Alocar cada ponteiro do array
void AlocarVetor(int **vet, int dim) {
    for (int i = 0; i < dim; i++) {
        *(vet + i) = (int *)malloc(dim * sizeof(int));

    }
}

 // Popular os vetores
void PopularVetor(int *const *const vet, int dim) {
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) { 
            *(*(vet + i) + j) = rand()%10; 
        }
    }
}

// Printar os vetores
void PrintarVetores(int *const *const vet, const int dim) {
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            printf("%d ", *(*(vet + i) + j));
        }
        printf("\n");
    }
}

// Alterna entre diagonal principal e secundaria
void SomaDiagonal(int *const *const arr, const int dim, int *soma, int (*S)(int *const *const, const int)) {
    *soma = (*S)(arr, dim);
}

// Somar a diagonal principal
int SomaDiagonalP(int *const *const arr, const int dim) {
    int somaP = 0;
    for (int i = 0; i < dim; i++)
        somaP += *(*(arr + i) + i);
    
    return somaP;
}

// Somar a diagonal secundaria
int SomaDiagonalS(int *const *const arr, const int dim) {
    int aux;
    int somaS = 0;
    for (int i = 0; i < dim; i++){
        aux = (dim - i - 1);
        somaS += *(*(arr + i) + aux);
    }

    return somaS;
}