#include<stdio.h>
#include<string.h>
int main()
{
   int size;
   printf("enter the sixe of array :");
   scanf("%d",&size);
    char a[size];
   printf("enter the array element");
   getch();
   fgets(a,size,stdin);

   for(int i=0;i<size;i++)
   {
    if(a[i]>='A' && a[i]<='Z')
    {
        a[i]=a[i]+32;
    }
   }
   printf("%s",a);
    return 0;
}