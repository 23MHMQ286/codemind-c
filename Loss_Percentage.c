#include<stdio.h>
int main (){
    float c,s,p;
    scanf("%f%f",&c,&s);
    p=c-s;
    printf("%.2f",(p*100)/c);
}