//7.1
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    setlocale(LC_ALL, "Rus");
    int a;
    printf("введите значение угла в градусах\n");
    scanf("%d",&a);
    while((a<0) || (a>360)){
        printf("введите значение угла ещё раз\n");
        scanf("%d",&a);
    }    
    int z=180;
    if  (a==180)
        printf("ответ:p радиан");
    else if (a==360 || a==0)
        printf("ответ:2p радиан");    
    else{
        for (int i=180; i>0;i--){
            if (z%i==0 && a%i==0){
                z/=i;
                a/=i;
                i=0;
            }
        }
        printf("ответ:%dp/%d радиан",a,z);
    }
    return 0;
}
