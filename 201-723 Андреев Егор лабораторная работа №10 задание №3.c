//10.3
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int a;
    scanf("%d",&a);
    if ((a<100) && (a%2==0))
        printf("da");
    else
        printf("no");
    return 0;
}
