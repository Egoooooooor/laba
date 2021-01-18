//15.3
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

float RingS(float r1,float r2){
    r1=(r1*r1*3.14)-(r2*r2*3.14);
    return(r1);
}

int main()
{   
    setlocale(LC_ALL, "Rus");  
    
    float R1,R2,S;
    for (int i=0;i<3;i++){
        printf("введите R1 R2\n");
        scanf("%f %f",&R1,&R2);
        S=RingS(R1,R2);
        printf("S=%f\n",S);
    }
    return 0;
}
