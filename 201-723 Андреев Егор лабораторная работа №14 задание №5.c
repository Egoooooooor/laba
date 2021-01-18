//14.5
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  
    
    int a,b,t;
    printf("введите a, b\n");
    scanf("%d %d",&a,&b);
    while (a!=b){
        if (b>a){
        t=a;
        a=b;
        b=t;
        }
        a=a-b;      
    }
printf("НОД=%d",a);
    return 0;
}
