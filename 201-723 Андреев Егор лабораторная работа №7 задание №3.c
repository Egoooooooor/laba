//7.3
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Rus");    
    
    float X,A,Y;
    printf("Введите X, A и Y\n");
    scanf("%f %f %f",&X,&A,&Y);
    float t=A/X;
    A=t+t*Y;
    printf("стоимость %.0fкг=%fруб",Y+1,A);
    return 0;
}
