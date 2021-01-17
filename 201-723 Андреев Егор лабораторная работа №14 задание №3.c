//14.3
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  
    
    int N,K,s,i;
    printf("введите N, K\n");
    scanf("%d %d",&N,&K);
        for(i=1;i<=K && s<N;i++){
            s=s+i;
        }
    printf("%d %d",i-1,s);
    return 0;
}
