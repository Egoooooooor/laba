//16.2
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int n,a,d;
    printf("введите n,a,d\n");
    scanf("%d %d %d",&n, &a, &d);
    int m[n],k=a*d;
    for (int i=0;i<n;i++){
        m[i]=k;
        printf("%d ",m[i]);
        k*=d;
    }
    return 0;
}
