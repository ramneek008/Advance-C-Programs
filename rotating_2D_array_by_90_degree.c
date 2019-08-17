/*
Given a two dimensional N*N array, print the output if the array is rotated by 90 degrees in clockwise direction.
First line of input will contain a number T = no. of test cases. 
Each test case will contain one line with number N (N*N is the size of the array). Next N lines will each contain N integers separated by space.
For each test-case, print the array rotated clockwise by 90 degrees. Each row of an array should be printed as m elements separated by exactly one space. 
There should be no space after last element in each row. Print an extra line after output for each test case.
*/

#include <stdio.h>

int main()
{
  int t,n,i,j,k;
  scanf("%d",&t);
  for(k=0;k<t;k++)
  {
    
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&arr[i][j]);
      }
    }
    for(i=0;i<n;i++)
    {
      for(j=n-1;j>=0;j--)
      {
        if(j>0)
        printf("%d ",arr[j][i]);
        else
          printf("%d",arr[j][i]);
      }
      printf("\n");
    }
    printf("\n");
    
  }
    return 0;
}
