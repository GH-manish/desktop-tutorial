// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int arr[10],s=0,i;
   for(i=0;i<10;i++)
   {
       printf("enter a number");
       scanf(" %d",&arr[i]);
       s+=arr[i];
   }
   printf("sum : %d",s);
   return 0;
}