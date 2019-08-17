/*
Given a sorted list of integers, find all distinct pair of integers in the list of N integers with sum equal to a given number K with O (n log n ) or O(n) time complexity.
Complete the function below which takes the array and K as parameters and return the number of pairs if any and 0 otherwise.
*/

int getPairsCount(int arr[], int n, int sum)
{
  int i,j,c=0;
  for(i=0;i<n;i++)
  {
    for(j=(i+1);j<n;j++)
    {
      if((sum-arr[i])==arr[j])
      {
        c++;
      }
    }
  }
  return c;
}
