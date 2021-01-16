//6.6
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int A,t;
    scanf("%d",&A);
    t=A*A;
    t=t*t;
    A=t*t;
    printf("A=%d",A);
    return 0;
}
    
