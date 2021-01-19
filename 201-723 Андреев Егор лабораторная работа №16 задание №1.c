//16.1
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
    int m[n],k=1;
    for (int i=0;k<=n;i++){
        m[i]=k;
        printf("%d ",m[i]);
        k+=2;
    }
    return 0;
}
