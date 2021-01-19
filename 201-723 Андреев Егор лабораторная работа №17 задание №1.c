//17.1
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
    int k,l,i;
    float s=0;
    printf("введите k,l\n");
    scanf("%d %d",&k,&l);
    for (i=k;i<=l;i++)
        s+=a[i];
    float p=s/(l+1-k);
    printf("ср ар=%f",p);
    return 0;
}
