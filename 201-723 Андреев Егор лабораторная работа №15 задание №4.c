//15.4
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int Quarter(float x,float y){
    if (x*y>0)
        if (x>0)
            y=1;
        else
            y=3;
    else
        if(x>0)
            y=4;
        else
            y=2;
    return(y);
}

int main()
{   
    setlocale(LC_ALL, "Rus");  
    
    float X,Y;
    int S;
    for (int i=0;i<3;i++){
        printf("введите ненулевые коорды точки\n");
        scanf("%d %d",&X,&Y);
        S=Quarter(X,Y);
        printf("%d четверть\n",S);
    }
    return 0;
}
