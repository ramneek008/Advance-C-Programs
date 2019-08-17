/*
There is an array of non-negative integers. A second array is formed by shuffling the elements of the first array and deleting a random element. 
Given these two arrays, find which element is missing in the second array.
First line of input will contain a positive integer T = number of test cases. Each test case will contain 3 lines. First line of each test case will contain two number m = size of the first array and n = size of the second array separated by space. 
Next 2 lines will contain m and n space separated non-negative integers.
For each test case, print the missing element in the second array.
*/

#include <stdio.h>

int main()
{
  int t,i,j,f,m,n,d,s;
  scanf("%d",&t);
  for(f=0;f<t;f++)
  {
    
    scanf("%d %d",&m,&n);
    int a[m],b[n];
    for(i=0;i<m;i++)
    {
      scanf("%d",&a[i]);
    }
     for(j=0;j<n;j++)
    {
      scanf("%d",&b[j]);
     }
    for(i=0;i<m;i++)
    {
      s=0;
      for(j=0;j<n;j++)
      {
        s=0;
        if(a[i]==b[j])
        {
          s++;
          break;
        }
      }
      if(s==0)
      {
        d=i; 
        break;
       }
    }
     
    printf("%d\n",a[d]);
  }
    return 0;
}
