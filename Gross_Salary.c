#include<stdio.h>
int main()
{
    float bs,gs,da,hra;
    scanf("%f",&bs);
    if(bs<=10000)
    {
        gs=bs+(bs*0.80)+(bs*0.20);
        printf("%.2f",gs);
    }
    else if(bs<=20000)
    {
        gs=bs+(bs*0.90)+(bs*0.25);
        printf("%.2f",gs);
    }
    else
    {
        gs=bs+(bs*0.95)+(bs*0.30);
        printf("%.2f",gs);
    }
}