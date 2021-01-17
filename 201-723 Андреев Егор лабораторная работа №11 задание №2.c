//11.2
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int a,b,c;
    int S=0;
    printf("введите a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    if ((a>b)||(a>c)){
        S+=a;
        if (b>c)
            S+=b;
        else
            S+=c;
    }
    else
    S+=b+c;
    printf("сумма двух наибольших=%d",S);
    return 0;
}
