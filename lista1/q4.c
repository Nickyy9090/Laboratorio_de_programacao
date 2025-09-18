#include <stdio.h>
#include <string.h>

int main(){
    char resp[20], cont;
    float valor;
    
    while(1){
    puts("Valor da conta: ");  
    fgets(resp, sizeof(resp), stdin);

    resp[strcspn(resp, "\n")] = '\0';

    if (sscanf(resp, "%f %c", &valor, &cont)==1){

        break;

    } else {
        
        puts("Valor invalido! Digite apenas numeros");
    }

    }
    
    printf("Valor total da conta: R$%.1f", valor*1.1);
    return 0;
}
