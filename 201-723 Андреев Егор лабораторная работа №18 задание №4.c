//18.4
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int n;
    printf("введите n\n");
    scanf("%d",&n);
    
    int a[n];
    printf("введите массив a\n");
    for (int t=0;t<n;t++){
        printf("a[%d]=",t);
        scanf("%d",&a[t]);
    }
    for (int t=0;t<n;t++)
        printf("%d ",a[t]);
    printf("\n");
    
    int max=0,maxt;
    int min=100000,mint;
    for (int t=0;t<n;t++){
        if (a[t]>max){
            max=a[t];
            maxt=t;
        }
        if (a[t]<min){
            min=a[t];
            mint=t;
        }
    }
    if (mint>maxt){    
        maxt=maxt+mint;
        mint=maxt-mint;
        maxt=maxt-mint;
    }
    for (int t=mint+1;t<maxt;t++)
        a[t]=0;
    for (int t=0;t<n;t++)
        printf("%d ",a[t]);
    return 0;
}   
