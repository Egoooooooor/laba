//13.2
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  
    
    int N;
    float a=1.1;
    float S=1;
    printf("введите N\n");
    scanf("%d",&N);
        for (int i=0;i<N;i++){
            S=S*a;
            a=a + 0.1;
        }
    printf("%f",S);
    return 0;
}
