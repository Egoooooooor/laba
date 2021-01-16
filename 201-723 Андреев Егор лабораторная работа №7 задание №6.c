//7.6
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");    
    
    int A1,B1,C1,A2,B2,C2;
    printf("Введите \nA1,B1,C1\nA2,B2,C2\n");
    scanf("%d %d %d %d %d %d",&A1,&B1,&C1,&A2,&B2,&C2);
    float x=(C1-B1)/A1;
    float y=(C2-A2*x)/B2;
    printf("x=%f y=%f",x,y);
    return 0;
}
