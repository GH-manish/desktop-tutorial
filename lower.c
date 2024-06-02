#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[]={23,35,34,35,102,24};
    int temp;
    
        for(int i=0;i<6;i++)
        {
            for(int j=i+1;j<6;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }    
         }
         if(arr[5]==arr[4])
         printf("%d",arr[3]);
         else
         printf("%d",arr[4]);
    return 0;
}