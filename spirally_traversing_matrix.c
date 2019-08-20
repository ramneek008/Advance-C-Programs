/*
Traversing an array is an elementary operation on an array, in which each element will be processed for some operation. Printing elements is one example operation.
So, complete the below function, which given a two dimensional array, print the array in spiral form rotating clockwise.
Each test-case will begin with two number m and n where m = no. of rows and n = no. of columns. m rows will follow with n integers in each row separated by a space. Constraint : 1<=m<=50 and 1<=n<=50.
For each test case, print the elements of 2-d array in spiral form starting from index (0,0) or upper-left corner in clockwise direction.
*/

void printSpiral(int a[ROWS][COLS], int r, int c)
{
  {
    int m,n,i,j,x=0,y;
    m=r;
    n=c;
    if(m%2==0)
    {
      y=m/2;
    }
    else
    {
      y=(m+1)/2;
    }
    i=0;
    j=0;
    while(x<y)
    {
      while(j<n)
      {
        printf("%d\n",a[i][j]);
        j++;
      }
      j--;
      i++;
      while(i<m)
      {
        printf("%d\n",a[i][j]);
        i++;
      }
      i--;j--;
      if((i!=x)&&(j!=x-1))
      {
        while(j>=x)
        {
          printf("%d\n",a[i][j]);
          j--;
        }
        j++;i--;
        while(i>=x+1)
        {
          printf("%d\n",a[i][j]);
          i--;
        }
      }
      n--;m--;
      x++;
      i=x;j=x;
    }
  }
}