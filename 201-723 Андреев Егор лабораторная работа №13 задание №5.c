//13.5
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  
    
    int N,a,n;
    printf("введите a, N\n");
    scanf("%d %d",&a,&N);
        for (int i=0;i<=N;i++)
            n=-n+pow(a,i);
    printf("%d",-n);
        
    return 0;
}
