/*
Given an array of integers which is sorted but rotated by some number of times after sorting, and a integer k. 
Search the element k in this sorted rotated array efficiently. 
For example, suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand. (i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
*/

#include <stdioh>

int searchRotatedSortedArray(int *a, int size, int target)
{
  int i,m=0;
	for(i=0;i<size;i++)
    {
      if(a[i]==target)
      {
        return i;
      }
      else
      {
        m++;
      }
      if(m==size)
        return -1;
    }
  
}