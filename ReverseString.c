#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array :");
    scanf("%d",&n);
    char str[n];
    char temp;
    printf("enter any string to reverse it :");
    fgets(str,n,stdin);
    printf("you have entered ====>>>%s",str);
    // int size=sizeof(str)/sizeof(str[0]);
    int x=0;
    int y=8;
    for(int i=0;i<n/2;i++)
    {
        if(x<y)
        {
            temp=str[x];
            str[x]=str[y];
            str[y]=temp;
            x++;
            y--;
        }
    }
    printf("%s",str);
    return 0;
}