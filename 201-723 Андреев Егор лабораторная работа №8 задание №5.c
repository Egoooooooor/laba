//8.5
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int A,t;
    printf("Введите трехзначное число\n");
    scanf("%d",&A);   
    t=A%100;
    A=A/100;
    printf("%d",t*10+A);
    return 0;
}
