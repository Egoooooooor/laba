//17.2
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
    printf("введите массив \n");
    for (int t=0;t<n;t++){
        printf("a[%d]=",t);
        scanf("%d",&a[t]);
    }
    for (int t=0;t<n;t++)
        printf("%d ",a[t]);
    printf("\n");
    
    int d=abs(a[1]-a[0]),k=0;
    for (int i=0;i<n;i++){
        if (abs(a[i+1]-a[i])==d)
            k++;
    }
    if (k==n-1)
        printf("раз-ть прог-ии=%d",d);
    else
        printf("0");
    return 0;
}
