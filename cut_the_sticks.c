/*
Given an array, lengths, of N stick lengths (where each length is a positive integer), a cut operation reduces the length of each stick in the array by the length of the array's shortest stick.
 A stick can only be cut if it has a length ≥ 1.

Complete the cutSticks() function which has 3 parameters:
Size of the array (lengths_size).
An integer array of stick lengths (lengths).
Pointer to the variable which is used to store the size of the result array.

Your function must perform cut operations on lengths until every stick length is reduced to 0 and return an integer array, where ith element of the array denotes the individual sticks cut during the ith operation.
Your function must return an integer array, where ith element of the array denotes the individual sticks cut during the ith operation.
*/

/*
 * Complete the function below.
 * Please store the size of the int array to be returned in result_size pointer. For example,
 * int a[3] = {1, 2, 3};
 * *result_size = 3;
 * return a;
 * 
 */

int* cutSticks(int lengths_size, int *lengths, int *result_size)
{
  int m = lengths_size;
  static int arr[100];
  int ct=0;
  for(int i=0;i<m;i++)
  {
   int c=0;
   int min;
    min=999999;
    for(int j=0;j<m;j++)
    {
      if(lengths[j]<=min && lengths[j]!=0)
      {
        min=lengths[j];
      }
      else continue;
    }
       for(int k=0;k<m;k++)
   {
     if(lengths[k]==0)
       continue;
     else
     {
       lengths[k]=lengths[k]-min;
       c++;
   }
  }
    if(c!=0)
    {
   arr[ct]=c;
   ct++;
    }
}
*result_size=ct;
return arr;
}