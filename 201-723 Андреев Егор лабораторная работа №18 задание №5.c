//18.5
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
    printf("введите первый элемент \n");
    scanf("%d",&a[0]);
    printf("  a[0]=%d\n ",a[0]);
    for (int t=1;t<n;t++){
        a[t]=t;
        printf(" a[%d]=%d\n ",t,a[t]);
    }
    printf("\n");
    
    for (int t=0;t<n-1;t++){
        if (a[t]>a[t+1]){
            int l=a[t+1];
            a[t+1]=a[t];
            a[t]=l;
        }
    }
    for (int t=0;t<n;t++)
        printf("%d ",a[t]);
    return 0;
}   
