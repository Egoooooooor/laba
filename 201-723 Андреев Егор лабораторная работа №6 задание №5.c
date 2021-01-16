//6.5
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
    y=4*pow((x-3),6)-7*pow((x-3),3)+2;
    printf("y=%d",y);
    return 0;
}
    
