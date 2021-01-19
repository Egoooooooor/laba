//17.5
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
    
    int d=0,x,y;
    for (int i=0;i<n-1;i++){
        for (int k=i+1;k<n;k++){
            if (a[i]==a[k])
                x=i,y=k;
        }
    }
    printf("одинаковые элементы %d и %d",x,y);
    return 0;
}
