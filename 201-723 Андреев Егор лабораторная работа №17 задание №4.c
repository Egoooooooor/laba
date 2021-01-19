//17.4
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
    
    int d=0;
    for (int i=1;i<n-1;i++){
        if ((a[i]>a[i-1])&&(a[i]>a[i+1]))
            d=a[i];
    }
    printf("лок. макс.=%d",d);
    return 0;
}
