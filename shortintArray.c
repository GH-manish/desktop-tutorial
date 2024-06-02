
#include<stdio.h>
int main()
{
    int arr[10],i,j,temp;
    for(i=0;i<10;i++)
    {
        printf("enter array element :");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
        printf("%d   ",arr[i]);
    }
}