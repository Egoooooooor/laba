//№3
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    
    int A=15, B=26, C=20 ;
    printf("A=%d B=%d C=%d",A,B,C);
    int AC=abs(A-C);
    int BC=abs(B-C);
    int S=AC*BC;
    printf("\nAC=%d", AC);
    printf("\nBC=%d", BC);
    printf("\nпроизведение AC и BC = %d", S);
    return 0;
}
