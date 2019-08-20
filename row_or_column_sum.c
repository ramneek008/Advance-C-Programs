/*
John likes to play with numbers. He is playing a game where he writes numbers starting 1 till N in multiple rows. 
Initially he chooses a number W and he writes W numbers in each row except probably in the last row when he is done writing till number N. 
Given N and W and any row or column in this arrangement, print the sum of all the numbers in this row or column.
First line of input will contain a number T = number of test cases. For each test case, the first line will contain two numbers N and W. Another line will contain a number X and letter 'R' or 'C' separated by space. If letter is 'R', print the sum of numbers in row number X , else if letter is 'C', print the sum of numbers in column number X. Rows and columns are numbered in 1-based index ( as 1,2,3,..)
For each test case, print the sum of numbers in the row or column on a single line.
*/

#include <stdio.h>

int main()
{
    int t;
  scanf("%d",&t);
  while(t--)
  {
    int n,w,x,sum1=0,sum2=0;
    char ch;
    scanf("%d %d %d ",&n,&w,&x);
    scanf(" %c",&ch);
    x=x-1;
    int r;
    r=(n/w)+1;
    int a[r][w],k=1;
    for(int i=0;i<r;i++)
    {
      for(int j=0;j<w;j++)
      {
        if(k<=n)
        {
          a[i][j]=k;
          k++;
        }
        else
          a[i][j]=0;
      }
    }
   if(ch=='r' || ch=='R')
   {
     for(int i=x;i==x;i++)
     {
       for(int j=0;j<w;j++)
       {
         sum1+=a[i][j];
       }
     }
     printf("%d\n",sum1);
   }
     if(ch=='c' || ch=='C')
   {
     for(int i=0;i<r;i++)
     {
       for(int j=x;j==x;j++)
       {
         sum2+=a[i][j];
       }
     }
       printf("%d\n",sum2);
   }
  }
    return 0;
}