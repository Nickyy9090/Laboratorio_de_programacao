#include <stdio.h>

int main(){
    float valorHora, hora, desconto;

    printf("Valor da hora: ");
    scanf("%f", &valorHora);

    printf("Horas trabalhadas no mes: ");
    scanf("%f", &hora);

    printf("Percentual de desconto INSS: ");
    scanf("%f", &desconto);

    printf("Salario bruto: %.2f\n", valorHora*hora);
    printf("Salario liquido: %.2f", valorHora*hora*(1-(desconto/100)));

    return 0;

}