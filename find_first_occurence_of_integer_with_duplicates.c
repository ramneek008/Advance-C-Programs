/*
Given a sorted list of integers, find the position of first occurrence of a given number K in this list in O(log n) time.
*/

#include <stdio.h>

int main()
{
  int t,i,j,n,k,low,high,mid;
  scanf("%d",&t);
  for(j=0;j<t;j++)
  {
  scanf("%d %d",&n,&k);
  int arr[n];
  for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }    
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(arr[mid]!=k || arr[mid-1]==k)
    {
    if(arr[mid]<k)
    {
      low=(mid+1);
    }
      else
      {
        high=(mid-1);
      }
      mid=(low+high)/2;
    }
    printf("%d\n",mid);
  }
    return 0;
}