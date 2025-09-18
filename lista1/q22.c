#include <stdio.h>

int main(){
    char num[4];

    printf("Numero (3 dígitos): ");
    fgets(num, sizeof(num), stdin);

    for(int i=2; i>=0; i--){
        printf("%c", num[i]);
    }

    return 0;
}