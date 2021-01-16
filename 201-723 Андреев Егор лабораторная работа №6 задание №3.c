//6.3
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int t=B;
    B=C;
    C=A;
    A=t;
    printf("A=%d B=%d C=%d",A,B,C);
    return 0;
}
