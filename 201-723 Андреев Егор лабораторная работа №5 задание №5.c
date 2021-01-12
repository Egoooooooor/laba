//№5
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    
    int x1, y1, x2, y2, x3, y3;
    printf("введите точку A (x и y через пробел)\n");
    scanf("%d %d" , &x1 , &y1);
    printf("введите точку B (x и y через пробел)\n");
    scanf("%d %d" , &x2 , &y2);
    printf("введите точку С (x и y через пробел)\n");
    scanf("%d %d" , &x3 , &y3);
    double AC=sqrt(abs(x1-x3)* abs(x1-x3) + abs(y1-y3)* abs(y1-y3));
    double BC=sqrt(abs(x2-x3)* abs(x2-x3) + abs(y2-y3)* abs(y2-y3));
    double AB=sqrt(abs(x1-x2)* abs(x1-x2) + abs(y1-y2)* abs(y1-y2));
    double P=AB+BC+AC;
    double S=(P/2)*((P/2)-AC)*((P/2)-BC)*((P/2)-AB);
    printf("периметр равен=%f\n", P);
    printf("площадь равна=%f", sqrt(S));
    return 0;
}
