//9.1   
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    int N;
    scanf("%d",&N); 
    printf("%d",N%60);
    return 0;
}
