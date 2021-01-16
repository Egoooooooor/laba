//7.2
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Rus");    
    
    float a,x;
    printf("введите значение угла в радианах\n");
    scanf("%f",&a);
    x=((a*180)/3.14);
    printf("ответ:%f градусов",x);
    return 0;
}
