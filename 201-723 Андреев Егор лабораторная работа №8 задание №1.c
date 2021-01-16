//8.1
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int X;
    scanf("%d",&X);
    X=X/1024;
    printf("%d",X);
    return 0;
}
