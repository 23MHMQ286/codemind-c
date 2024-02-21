#include<stdio.h>
int main()
{
    int n,i,ele,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            count++;
            break;
        }
    }
    if(count)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}