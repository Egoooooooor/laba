//9.5
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int a;
    scanf("%d",&a);
    printf("%d",a/100+1);
    return 0;
}
