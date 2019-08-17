/*
Given a list of integers, find out the number that has the highest frequency. If there are one or more such numbers, output the smaller one.
*/

#include <stdio.h>

int main()
{
  int t,n,i,j,m,d=0,l;
  scanf("%d",&t);
  for(int k=0;k<t;k++)
  {
   scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    d=-32767;
    for(i=0;i<n;i++)
    {
      m=0;
      for(j=0;j<n;j++)
      {
        if(arr[i]==arr[j])
        {
          ++m;
        }
      }
      d=d>m?d:m;
    }
    for(i=0;i<n;i++)
    {
      m=0;
      for(j=0;j<n;j++)
      {
        if(arr[i]==arr[j])
          m++;
      }
      if(m==d)
      {
        l=i;
      }
    }
    printf("%d\n",arr[l]); 
  }
    return 0;
}