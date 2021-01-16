//10.1
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int a,b;
    scanf("%d%d",&a,&b);
    if ((a>2) && (b<=3))
        printf("da");
    else
        printf("no");
    return 0;
}
