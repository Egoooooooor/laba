//14.4
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int P,K;
    int S=1000;
    printf("введите P\n");
    scanf("%d",&P);
        for( K=0;S<=1100;K++){
            S+=((S*P)/100);
        }
    printf("%d %d",S,K);
    return 0;
}
