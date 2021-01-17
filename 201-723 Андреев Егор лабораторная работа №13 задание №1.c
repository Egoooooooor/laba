//13.1
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  
    
    float a;
    printf("введите a\n");
    scanf("%f",&a);
    for (float i=0.1;i<1.1;i+=0.1)
        printf("%.2f ",i*a);
    return 0;
}
