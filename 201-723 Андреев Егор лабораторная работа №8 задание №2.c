//8.2
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int A,B;
    printf("Введите А и В\n");
    scanf("%d %d",&A,&B);
    printf("%d",B=A/B);
    return 0;
}
