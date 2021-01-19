//16.3
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int n,a,b;
    printf("введите n,a,b\n");
    scanf("%d %d %d",&n, &a, &b);
    int m[n];
    m[0]=a;
    m[1]=b;
    int k=a+b;
    for (int i=2;i<n;i++){
        m[i]=k;
        k+=m[i];
    }
    for (int i=0;i<n;i++)    
        printf("%d ",m[i]);
    return 0;
}
