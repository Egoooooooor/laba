//№1
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    
    int x1, y1, x2, y2;
    printf("введите первую точку (x и y через пробел)\n");
    scanf("%d %d" , &x1 , &y1);
    printf("введите вторую точку (x и y через пробел)\n");
    scanf("%d %d" , &x2 , &y2);
    double S;
    S=abs(x1-x2)* abs(x1-x2) + abs(y1-y2)* abs(y1-y2);
    printf("расстояние между точками=%f", sqrt(S));
    return 0;
}
