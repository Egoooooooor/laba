//14.2
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  
    
    int a,b;
    printf("введите a, b\n");
    scanf("%d %d",&a,&b);
        while (a>b){
            a=a-b;
        }
    printf("%d",a);
    return 0;
}
