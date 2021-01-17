//11.5
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    char nol[]="нулевое";
    char chet[]="четное";
    char nechet[]="нечетное";
    char otr[]="отрицательное";
    char pol[]="положительное";
    char n[]="число";
    int a;
    printf("введите число\n");
    scanf("%d",&a);
    if (a==0)
        printf("%s %s",nol,n);
    else if(a>0)
        if(a%2==0)
            printf("%s %s %s",chet,pol,n);
        else
            printf("%s %s %s",nechet,pol,n);
    else
        if(a%2==0)
            printf("%s %s %s",chet,otr,n);
        else
            printf("%s %s %s",nechet,otr,n);
    return 0;
}
