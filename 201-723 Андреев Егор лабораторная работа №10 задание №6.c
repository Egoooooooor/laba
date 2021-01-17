//10.6
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a))
        printf("da");
    else
        printf("no");
    return 0;
}
