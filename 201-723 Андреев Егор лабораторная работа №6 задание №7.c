//6.7
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int A,t,k;
    scanf("%d",&A);
    t=A*A*A;
    k=t*t;
    A=k*k*t;
    printf("A=%d",A);
    return 0;
}
    
