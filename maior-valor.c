#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

void criar_vetor(float vetor[], int size);
float *maior_valor(float vetor[], int size);

int main () {
    float arr[TAM];

    // Preencher os vetores
    criar_vetor(arr, TAM);

    // Chama a funcao para buscar o maior valor
    float *valorMaiorPtr = maior_valor(arr, TAM); 

    printf("Maior valor: %.3f\n", *valorMaiorPtr);

    return 0;
}

// Gera os valores aleatorios e preenche o array
void criar_vetor(float vetor[], int size) {
    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        *(vetor + i) = (rand()/(float) RAND_MAX)*10;
        printf("%.3f\n", *(vetor + i));
    }    
}

// Retorna um ponteiro para o maior valor do array
float *maior_valor(float vetor[], int size) {
    
    float *maiorPtr = vetor;
    for (int i = 1; i < size; i++) {
        if (*(vetor + i) > *maiorPtr) // Equivalente a (vetor[i] > *maior)
            maiorPtr = vetor + i;
    }
    return maiorPtr;
}