/*
Write a program to add one to each digit of a number.
First line of input will contain number of test cases. Next N lines will contain number n as test case where 1<=n<=99999.
For each input case, add one to each digit of n, and print the new number.
*/

#include <stdio.h>

int main()
{
  int test,n,t,i,c=0,num=0,j,sum=0;
  scanf("%d",&test);                    //scan no. of test cases
  for(i=0;i<test;i++)
  { num=0;
   sum=0;
   c=0;
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
    t=t/10;
    c++;
    }
    for(j=0;j<c;j++)
    {
      num = (num*10)+1;
    }
    sum = n+num;
    printf("%d\n",sum);                 //prints the final added number
  }
    return 0;
}