//15.2
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int Sign(float x){
    if (x==0){
        return(x);}
    if (x>0){
        int x=1;
        return(x);}
    if (x<0){
        int x=-1;
        return(x);}
}

int main()
{   
    setlocale(LC_ALL, "Rus");  

    float a,b;
        printf("введите a b\n");
        scanf("%f %f",&a,&b);
        int t= Sign(a)+Sign(b);
        printf("%d\n",t);
    return 0;
}
