//10.4
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int a,b,c;
    scanf("%d",&a);
    c=a%10;
    a/=10;
    b=a%10;
    a/=10;
    
    if (((a<b) && (b<c)) || ((a>b) && (b>c)))
        printf("da");
    else
        printf("no");
    return 0;
}
