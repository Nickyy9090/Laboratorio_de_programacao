#include <stdio.h>

int main(){
    int num, maior, cont=1;

    do {
       
        printf("Digite um numero (zero para parar): ");
        scanf("%d", &num);

        maior = (cont==1)?num:(num>maior?num:maior); 

        cont++;

    } while (num);

    printf("O maior numero digitado foi %d\n", maior);
    printf("Fim do programa\n");
    
    return 0;
}