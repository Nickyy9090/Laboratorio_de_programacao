#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char cont[20], k, sexo;
    float h;

    while(1){
        puts("Altura: ");
        fgets(cont, sizeof(cont), stdin);

        cont[strcspn(cont, "\n")] = '\0';

        if (sscanf(cont, "%f %c", &h, &k) == 1){
            break;
        } else {
            puts("Valor invalido!");
        }
    }

    while(1){
        puts("Sexo [h/m]: ");
        scanf(" %c", &sexo);

        if (tolower(sexo)=='h'||tolower(sexo)=='m'){
            break;
        } else{
            puts("Valor invalido!");
        }
    }

    
    printf("Peso ideal %.2f", (sexo=='m') ? 72.7*h-58 : 62.1*h-44.7);

}