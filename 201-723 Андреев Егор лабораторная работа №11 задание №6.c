//11.6
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
    setlocale(LC_ALL, "Rus");  

    
    char c[]="четное ";
    char nech[]="нечетное ";
    char d1[]="однозначное число";
    char d2[]="двузначное число";
    char d3[]="трехзначное число";
    char n[]="число";
    int a;
    printf("введите целое число\n");
    scanf("%d",&a);
    if (a%2==0){
            if (((a%1000)/100)==0){
                if (((a%1000)/10)==0){
                    strcpy(c,c);
                    strcat(c,d1);
                    printf("%s",c);}
                else{
                    strcpy(c,c);
                    strcat(c,d2);
                    printf("%s",c);}}
            else {
                strcpy(c,c);
                strcat(c,d3);
                printf("%s",c);}}
    else {
        strcpy(c,nech);
            if (((a%1000)/100)==0){
                if (((a%1000)/10)==0){
                    strcpy(c,c);
                    strcat(c,d1);
                    printf("%s",c);}
                else{
                    strcpy(c,c);
                    strcat(c,d2);
                    printf("%s",c);}}
            else {
                strcpy(c,c);
                strcat(c,d3);
                printf("%s",c);}}
    return 0;
}
