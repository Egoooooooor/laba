//9.2   
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int K;
    scanf("%d",&K);
    printf("%d",K%7);
    return 0;
}
