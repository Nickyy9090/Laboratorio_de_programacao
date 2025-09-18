#include <stdio.h>
#include <math.h>

int main(){
    float num1, num2, num3, mediaArit;

    printf("Numero 1: ");
    scanf("%f", &num1);

    printf("Numero 2: ");
    scanf("%f", &num2);

    printf("Numero 3: ");
    scanf("%f", &num3);

    printf("A media aritmetica entre os numeros e %.2f\n", (num1+num2+num3)/3);
    printf("A media geometrica entre os numeros e %.2f", pow(num1*num2*num3, 1.0/3));

    return 0;
}