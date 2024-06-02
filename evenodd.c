#include <stdio.h>
#include <conio.h>
void main()
{
int x;
printf("enter any no :");
scanf("%d",&x);
if (x==0)
 printf("%d is zero");
else if (x%2==0)
{
   printf("%d is even no",x); /* code */
}
else
printf("%d is odd no.",x);

}