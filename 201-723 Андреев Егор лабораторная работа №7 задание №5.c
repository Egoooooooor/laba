//7.5
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   

    setlocale(LC_ALL, "Rus");    
    
    printf("решение A*x+B=0\nвведите A,B\n");
    float A,B;
    scanf("%f %f",&A,&B);
    printf("x=%f",((-B)/A));
    return 0;
}
