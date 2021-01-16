//9.3
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int K,N;
    scanf("%d %d",&K,&N);
    printf("%d",(K-(8-N))%7);
    return 0;
}
