#include<stdio.h>
int main()
{
    float salary,hra,da,pf,gross;
    scanf("%f%f%f",&salary,&hra,&da);
    pf=(salary/100)*12;
    gross=salary+hra+da+pf;
    printf("%.2f
%.2f",pf,gross);
    
}