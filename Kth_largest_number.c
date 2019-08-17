/*
Write a method called kthLargest that accepts an integer k and an array arr as its parameters and returns the element such that k elements have greater or equal value. 
If k = 0, return the largest element; if k = 1, return the second largest element, and so on.
For example, if the array passed contains the values {74, 85, 102, 99, 101, 56, 84} and the integer k passed is 2, your method should return 99 because there are two values at least as large as 99 (101 and 102).
*/

int kthLargest(int arr[], int size, int k)
{
  int d,j,i;
  for(j=0;j<=k;j++)
  {
    d=-32767;
 	 for(i=0;i<size;i++)
    {
      d=d>arr[i]?d:arr[i];
    }
    for(i=0;i<size;i++)
    {
      if(d==arr[i])
      {
        arr[i]=-32767;
        break;
      }
    }
  }return d;
}