#include <stdio.h>

int main(){
    int seg, horas, min;

    printf("Tempo em segundos: ");
    scanf("%d", &seg);

    horas = seg/3600;
    min = (seg%3600)/60;
    seg = (seg%3600)%60;

    printf("%d h %d m %d s", horas, min, seg);

    return 0;
}