#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    float avg;
    avg=(sum*1.0)/n;
    printf("%.2f",avg);
}