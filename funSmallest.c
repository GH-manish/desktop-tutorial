// Online C compiler to run C program online
#include <stdio.h>
#include<limits.h>
int smallest(int [],int);
int main() 
{
  int n,i;
  printf("enter the size of array  :");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
   printf("enter the element of array :");
   scanf("%d",&arr[i]);
  }
printf("smallest no :%d",smallest(arr,n));
    return 0;
}

int smallest(int b[],int n1)
{
    int temp=INT_MAX;
    for(int i=1;i<n1;i++)
    {
        if(temp>b[i])
        {
            temp=b[i];
        }
    }
    return temp;
}