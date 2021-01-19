//18.1
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
    
    int b[n];
    printf("введите массив b\n");
    for (int t=0;t<n;t++){
        printf("b[%d]=",t);
        scanf("%d",&b[t]);
    }
    for (int t=0;t<n;t++)
        printf("%d ",b[t]);
    printf("\n");
    
    for (int i=0;i<n;i++){
        a[i]=a[i]+b[i];
        b[i]=a[i]-b[i];
        a[i]=a[i]-b[i];
    }
    for (int t=0;t<n;t++)
        printf("массив а=%d ",a[t]);
    printf("\n");
    for (int t=0;t<n;t++)
        printf("массив b=%d ",b[t]);
    printf("\n");
    return 0;
}   
