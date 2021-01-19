//18.2
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
    float b[n];
    
    printf("введите массив a\n");
    for (int t=0;t<n;t++){
        printf("a[%d]=",t);
        scanf("%d",&a[t]);
    }
    
    for (int t=0;t<n;t++){
        float s=0;
        printf("%d ",a[t]);
        for (int i=1;i<=t;i++)
            s+=a[i];
        b[t]=s/(float)t;
    }
    //условие какое-то непонятно я так и не понял что должно быть в b[0] 
    printf("\n");
        for (int t=0;t<n;t++)
        printf("%.2f ",b[t]);
    printf("\n");
    return 0;
}   
