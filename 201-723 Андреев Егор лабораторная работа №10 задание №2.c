//10.2
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a<b) && (b<c))
        printf("da");
    else
        printf("no");
    return 0;
}
