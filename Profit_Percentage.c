#include<stdio.h>
int main ()
{
    float c,s,l;
    scanf("%f%f",&c,&s);
    l=s-c;
    printf("%.2f",(l*100)/c);
}