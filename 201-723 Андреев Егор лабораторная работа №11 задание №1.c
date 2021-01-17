//11.1
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int a,b;
    printf("введите a,b\n");
    scanf("%d %d",&a,&b);
    if (a==b)
        a=0,b=0;
    else if(a>b)
        b=a;
    else
        a=b;
    printf("a=%d b=%d",a, b);
    return 0;
}
