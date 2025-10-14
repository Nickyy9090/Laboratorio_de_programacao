/* Bubble Sort usando funcoes e ponteiros*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

void criar_vetor(float vetor[], int size);
void Bubble_sort(float vetor[], int size);
void printaVetor(float vetor[], int size);

int main () {
    float arr[TAM];

    // Preencher os vetores
    criar_vetor(arr, TAM);

    // Printa o vetor
    printf("Vetor criado: \n");
    printaVetor(arr, TAM);

    // Chamar a funcao pra ordenar os vetores
    Bubble_sort(arr, TAM);

    printf("\n\n");

    // Printa o vetor ordenado
    printf("Vetor Ordenado: \n");
    printaVetor(arr, TAM);

    return 0;
}

// Gera os valores aleatorios e preenche o array
void criar_vetor(float vetor[], int size) {
    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        vetor[i] = (rand()/(float) RAND_MAX)*10;
    }    
}

// Ordena os vetores mediante Bubble sort
void Bubble_sort(float vetor[], int size) {
    
    void *troca(float *v1Ptr, float *v2Ptr);

    for (int i = 0; i < size - 1; i++) {

        char flag = 0;
        for (int j = 0; j < size - 1; j++) {

            if (vetor[j] > vetor[j+1]) 
                troca(&vetor[j], &vetor[j+1]);
                flag = 1;
        }

        if (!flag) break;
    }
}

// Troca os valores
void *troca(float *v1Ptr, float *v2Ptr) {

    float aux = *v1Ptr;
    *v1Ptr = *v2Ptr;
    *v2Ptr = aux;
}

// Printa os vetores
void printaVetor(float vetor[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%.3f ", vetor[i]);
    }
}