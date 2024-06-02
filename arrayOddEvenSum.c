
#include<stdio.h>
int main()
{
    int arr[10],i,sum1=0,sum2=0;
    for(i=0;i<10;i++)
    {
        printf("enter any no.");
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            sum1+=arr[i];
        else
            sum2+=arr[i];
    }
    printf("sum1 :%d \n",sum1);
    printf("sum2 :%d",sum2);
    return 0;
}