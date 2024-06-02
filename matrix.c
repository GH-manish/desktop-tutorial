//sum of matrix having size 3*3
#include <stdio.h>

int main() {
  int arr1[3][3],arr2[3][3],arr3[3][3];
  printf("enter the 9 value for 1st matrix: \n ");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&arr1[i][j]);
    }
  }
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&arr2[i][j]);
    }
  }
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
          printf("%d  -",arr1[i][j]+arr2[i][j]);
      }
  }
  return 0;
}