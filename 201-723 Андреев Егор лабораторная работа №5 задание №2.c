//№2
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    
    int A, B, C ;
    printf("введите точку A, В, C\n");
    scanf("%d %d %d" , &A , &B , &C);
    int AC=abs(A-C);
    int BC=abs(B-C);
    int S=AC+BC;
    printf("\nAC=%d", AC);
    printf("\nBC=%d", BC);
    printf("\nсумма AC и BC=%d", S);
    return 0;
}
