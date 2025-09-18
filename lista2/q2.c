#include <stdio.h>

int main(){
    int num;

    do{
        printf("Digite um numero (1-7): ");
        scanf("%d", &num);

        switch(num){
            case 0:
                break;
            case 1:
                printf("Domingo\n");
                break;
            case 2:
                printf("Segunda\n");
                break;
            case 3:
                printf("Terca\n");
                break;
            case 4:
                printf("Quarta\n");
                break;
            case 5:
                printf("Quinta\n");
                break;
            case 6:
                printf("Sexta\n");
                break;
            case 7:
                printf("Sabado\n");
                break;
            default:
                printf("Numero de dia nao valido.\n");
        }
    }while(num);

    printf("Fim do programa!");

    return 0;
}