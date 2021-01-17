//10.7
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a + b > c)&&(b + c > a)&&(a + c > b))
        printf("da");
    else
        printf("no");
    return 0;
}
