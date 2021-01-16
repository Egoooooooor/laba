//9.4
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int a,b,c,k;
    scanf("%d %d %d",&a,&b,&c);
    k=(a/c)*(b/c);
    a=a*b-c*c*k;
    printf("%d %d",k,a);
    return 0;
}
