//17.3
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
    
    int d=1000000;
    for (int i=0;i<n;i++){
        if ((i%2==0)&&(a[i]<d))
            d=a[i];
    }
    printf("наим.чет.=%d",d);
    return 0;
}
