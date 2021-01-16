//7.4
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Rus");    
    
    int V1,V2,S,T;
    printf("Введите cкорость первого автомобиля(км/ч)\n");
    scanf("%d",&V1);
    printf("Введите cкорость второго автомобиля(км/ч)\n");
    scanf("%d",&V2);
    printf("Введите расстояние между ними в км\n");
    scanf("%d",&S);
    printf("Введите время(ч)\n");
    scanf("%d",&T);
    int S1=V1*T;
    int S2=V2*T;
    printf("растояние между ними через %d ч =%d",T,(S+S1+S2));
    return 0;
}
