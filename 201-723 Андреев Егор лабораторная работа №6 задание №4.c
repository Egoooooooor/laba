//6.4
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int y,x;
    scanf("%d",&x);
    ;
    y=3* pow(x,6)-6*pow(x,2)-7;
    printf("y=%d",y);
    return 0;
}
    
