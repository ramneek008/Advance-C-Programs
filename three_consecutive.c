/*
Write a method threeConsecutive that accepts three integers as parameters and returns 1 if they are three consecutive numbers 
( i.e if the numbers can be arranged into an order such that their values differ by exactly 1 ) otherwise return 0.
For example, the call of ThreeConsecutive(3, 2, 4) would return 1.
*/

#include <stdio.h>

int threeConsecutive(int a, int b, int c)
{
 int d=32767,e=-32768;
  d=a<b?a:b;
  d=d<c?d:c;
  e=a>b?a:b;
  e=e>c?e:c;
  if(a!=b && a!=c && b!=c)
  {
  if((d+1)==a || (d+1)==b || (d+1)==c || (e-1)==a || (e-1)==b || (e-1)==c)
    return 1;
    else
      return 0;
  }
  else
    return 0;
}

int main()
{
    int a,b,c,g;
    scanf("%d %d %d",&a,&b,&c);
    g = threeConsecutive(a,b,c);
    if(g)
    printf("Consecutive");
    else
    printf("Not Consecutive");
     return 0;
}
  