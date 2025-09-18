#include <stdio.h>

int main(){
    int num;

    printf("Numero: ");
    scanf("%d", &num);

    printf("%s\n", (num%2)?"Impar":"Par");

    return 0;
}