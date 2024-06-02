
#include<stdio.h>
int main()
{
    int arr[10],i,j,g,count=0;
    for(i=0;i<10;i++)
    {
        printf("enter the no");
        scanf("%d",&arr[i]);
        
    }
    g=arr[0];
    for(j=0;j<10;j++)
    {
        if(g>arr[j])
            g=arr[j];
            count++;
            
    }
      printf("%d is smallest no.",g);
        return 0;
}
