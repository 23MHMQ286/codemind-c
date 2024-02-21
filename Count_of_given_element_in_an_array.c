#include<stdio.h>
int main()
{
    int n,i,count=0,ele;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==arr[i])
        {
            count++;
        }
    }
    printf("%d",count);
}