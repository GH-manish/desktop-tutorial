#include<stdio.h>
#include<conio.h>
void main()
{
  int i,t=3,n,s=2;
  printf("enter any no.");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d",s);
    printf(",");
    s=s+t;
    t=t+2;
  }
}