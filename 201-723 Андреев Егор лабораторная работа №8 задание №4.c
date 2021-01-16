//8.4   
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int A,t;
    printf("Введите двузначное число\n");
    scanf("%d",&A);   
    t=A%10;
    A=A/10;
    printf("%d",t*10+A);
    return 0;
}
