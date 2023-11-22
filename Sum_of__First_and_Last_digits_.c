#include<stdio.h>
int main()
{
    int n,sum,l;
    scanf("%d",&n);
    l=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    sum=l+n;
    printf("%d",sum);
}