#include <stdio.h>

int main(){
    int x;

    while(1){

    puts("Numero: ");
    if (scanf("%d", &x)!=1){

        puts("Erro! Tente novamente");
        
        while(getchar() != '\n');
    
    } else {
        break;}
}

    printf("Hexadecimal: %x\n", x);
    printf("Octal: %o", x);

    return 0;
}