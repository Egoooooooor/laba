//15.1
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

float PowerA3(float a,float b){
    b=a*a*a;
    return(b);
}

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int n,s,k;
    for (int i=0;i<5;i++){
        printf("введите a\n");
        scanf("%d",&n);
        k=PowerA3(n,s);
        printf("a^3=%d\n",k);}
    return 0;
}
