//16.5
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
    for (int t=0;t<n;t++){
        a[t]=t;
        printf("%d ",a[t]);
    }
    printf("\n");
    int k=0;
    for (int i=0;i<n;i++){
        if (i%2!=0)
            printf("%d ",a[i]);
    }
    printf("\n");
    n-=1;
    for (int i=0;i<n;i++){
        if ((n-i)%2==0)
            printf("%d ",a[n-i]);
    }
    return 0;
}
