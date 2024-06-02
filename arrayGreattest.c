#include<stdio.h>
int main()
{
int arr[10],i,g=0;
for(i=0;i<10;i++)
{
    printf("enter the no. :");
    scanf("%d",&arr[i]);
    if(g<arr[i])
        g=arr[i];
}
printf("%d is greatedt no",g);
return 0;
}