//13.3
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  
    
    int N, N2=0;
    printf("введите N\n");
    scanf("%d",&N);
        for (int i=1;i<=(2*N-1);i+=2){
            N2+=i;
            printf("%d\n",N2);
        }
    return 0;
}
