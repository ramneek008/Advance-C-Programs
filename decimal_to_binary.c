/*
Write a recursive function decimalToBinary that accepts an integer as a parameter and returns an integer whose digits look like that number's representation in binary (base-2).
For example, the call of decimalToBinary(43) should return 101011.
*/

#include <math.h>
#include<stdio.h>

int decimalToBinary(int n)
{
   int i;
  for(i=8;i>=1;i--)
  {
    if(n>=pow(2,i))
    {
      return pow(10,i) + decimalToBinary(n-pow(2,i));
    }
    else if(n==1)
    {
      return 1;
    }
  }
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",decimalToBinary(n));
    return 0;
}