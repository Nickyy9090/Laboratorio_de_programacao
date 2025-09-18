#include <stdio.h>

int main(){
    char dias, grat=1;
    
    printf("Dias trabalhados: ");
    scanf("%d", &dias);

    grat = (dias>20)?1.30:(dias>10?1.20:01);

    printf("Salario: %.2f", grat*dias*50.25);

    return 0;
}