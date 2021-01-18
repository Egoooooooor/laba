//14.6
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  
    
    int t,N,i;
    int a=1; int b=1;
    printf("введите N\n");
    scanf("%d",&N);
    for ( i=2;a!=N;i++){
        if (b<a){
        t=a;
        a=b;
        b=t;
        }
        a=a+b;      
    }
printf("%d",i);
    return 0;
}
