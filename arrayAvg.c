#include<stdio.h>
int main()
{
 int arr[10],i,j,avg=0;
 for(i=0;i<10;i++)
 {
     printf("enter the no.");
     scanf("%d",&arr[i]);
 }
 for(j=0;j<10;j++)
 {
     avg+=arr[j];
 }
 avg=avg/10;
 printf("avg : %d",avg);
 return 0;
}