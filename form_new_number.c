/*
Write a recursive function evenDigits that accepts an integer parameter n and returns a new integer containing only the even digits from n,in the same order.
 If n does not contain any even digits, return 0.
For example, the call of evenDigits(8342116) should return 8426 and the call of evenDigits(35179) should return 0.
*/

#include <stdio.h>

int evenDigits(int n)
{
  if(n<0)
  {
    return -evenDigits(-n);
  }
  else if(n==0)
    return 0;
  else if(n%2==1)
  {
    return evenDigits(n/10);
  }
  else
    return 10*evenDigits(n/10)+(n%10);
  
}

int main()
{
    int n;
    scanf("%d",&n);
    int g = evenDigits(n);
    printf("%d",g);
    return 0;
}
