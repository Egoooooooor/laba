//11.4
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int x,y;
    printf("введите ненулевые коорды точки\n");
    scanf("%d %d",&x,&y);
    if (x*y>0)
        if (x>0)
            printf("1 четверть");
        else
            printf("3 четверть");
    else
        if(x>0)
            printf("4 четверть");
        else
            printf("2 четверть");
    return 0;
}
