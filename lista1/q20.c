#include <stdio.h>

int main(){
    int num1, num2;

    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    printf("%d %s %d\n", num1,
        (num1%num2)?"nao e divisil por":
        "e divisil por", num2);

    return 0;
}