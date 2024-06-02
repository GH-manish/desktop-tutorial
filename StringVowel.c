// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int count=0,temp;
   char arr[]={'m','a','n','i','s','h','a','h','o'};
   for(int i=0;i<9;i++)
   {
    if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
        count++;
   }
   printf("total no of vowel is %d ",count);
    return 0;
}