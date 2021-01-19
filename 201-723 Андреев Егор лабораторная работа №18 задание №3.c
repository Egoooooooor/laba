//18.3
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
    
    int a[n],op=0;
    printf("введите массив a\n");
    for (int t=0;t<n;t++){
        printf("a[%d]=",t);
        scanf("%d",&a[t]);
    }
    for (int t=0;t<n;t++){
        printf("%d ",a[t]);
        if (a[t]%2!=0)
            op=1;
    }
    printf("\n");
    
    int d=100000;
    if (op==1){
        for (int t=0;t<n;t++){
            if (a[t]%2!=0)
                d=a[t];
        }
        for (int t=0;t<n;t++){
            if (a[t]%2!=0)
                a[t]+=d;
            printf("%d ",a[t]);
        }
    }    
    else{
        for (int t=0;t<n;t++)
        printf("%d ",a[t]);}
    return 0;
}   
