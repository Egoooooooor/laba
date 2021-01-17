//14.1
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
        for (int i=a;i<=b;i++){
            for (int k=1;k<=i;k++)
                printf("%d",a);
            printf(" \n");
            a+=1;
        }
    return 0;
}
