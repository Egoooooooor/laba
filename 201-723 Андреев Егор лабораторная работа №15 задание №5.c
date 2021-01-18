//15.5
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

float Fact2(float N){
    int s=1;
    if ((int)N % 2!=0){
        for(int i=1;i<=N;i+=2)
            s=s*i;
    }
    else{
        for(int i=2;i<=N;i+=2)
            s=s*i;
    }
    return(s);
}

int main()
{   
    setlocale(LC_ALL, "Rus");  
    
    float n;
    printf("введите n\n");
    scanf("%f",&n);
    printf("%d",(int)n);
    n=Fact2(n);
    printf("!!=%f \n",n);
    return 0;
}
