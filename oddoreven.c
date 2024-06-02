#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("enter any no.:");
    scanf("%d",&x);
    if(x&1)
    printf("odd");
    else
    printf("even");
}