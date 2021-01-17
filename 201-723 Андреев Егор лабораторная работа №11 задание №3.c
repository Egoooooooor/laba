//11.3
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int a,b,c;
    printf("введите a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    if (abs(a-b)>abs(a-c))
        printf("ближайшая точка с=%d; расстояние=%d",c,abs(a-c));  
    else
        printf("ближайшая точка b=%d; расстояние=%d",b,abs(a-b));  
    return 0;
}
