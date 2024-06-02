//2nd greatest no.
#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[10],i,j,l=INT_MIN,l2;
    for(i=0;i<10;i++)
    {
        printf("enter any no: ");
        scanf("%d",&arr[i]);
        if(l<arr[i]){
            l2=l;
            l=arr[i];
        }
    }
        printf("2nd largest no: %d",l2);
    return 0;
}