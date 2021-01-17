//10.5
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int a,k,t;
    scanf("%d",&a);
    t=a%100;
    a/=100;
    k=t%10;
    t=t/10+k*10;
    
    if (t==a)
        printf("da");
    else
        printf("no");
    return 0;
}
