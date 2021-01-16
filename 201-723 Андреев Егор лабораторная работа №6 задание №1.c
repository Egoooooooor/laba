//6.1
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int A,B;
    scanf("%d %d",&A,&B);
    A=A+B;
    B=A-B;
    A=A-B;
    printf("A=%d B=%d",A,B);
    return 0;
}
