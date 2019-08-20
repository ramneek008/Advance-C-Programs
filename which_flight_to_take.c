/*
Mr. Gopal has to book a flight for his holiday. He prefers to fly cheap. However, if two flights have same price, he prefers one with shorter flight duration. If two flights have same price and flight duration, he prefers to fly during early hours in a day. Mr. Gopal needs your help. 
Given description of his flight options in format '{flight number} {departure time} {flight duration} {price}', he wants you to give him three options out of all in decreasing order of his preference.
First line of input will contain a positive integer i.e. number of test cases. Each test case will contain multiple lines.
First line will contain a positive integer N i.e. number of flights to choose. Next N lines will contain description of flights in format '{flight number} {departure time} {flight duration} {price}' . 
Departure time will be in format 'HH:mm' where HH is hour in 24 hour clock and mm is minutes. Flight duration will be in minutes.
For each test case, print on a single line flight numbers of top three options for Mr. Gopal in decreasing order of his preference.
The flight numbers should be separated by single space. There should be no space after last flight number on each line.
*/

#include <stdio.h>
#include <string.h>

int main()
{

  int t,i,j,k,n;
  
  scanf("%d",&t);
  for(k=0;k<t;k++)
  {
    
    scanf("%d",&n);
    struct flight
    {
      char name[3];
      char time[6];
      int dur, price;
    }F[n],temp;
    for(i=0;i<n;i++)
    {
      scanf("%s",F[i].name);
      scanf("%s",F[i].time);
      scanf("%d",&F[i].dur);
      scanf("%d",&F[i].price);
    }
    
    for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-1;j++)
      {
        if(F[j].price>F[j+1].price)
        {
        temp=F[j];
        F[j]=F[j+1];
        F[j+1]=temp;
        }
      }
    } 
    if(F[0].price=F[1].price)
      {
        if(F[0].dur>F[1].dur)
     	 printf("%s %s ",F[1].name,F[0].name);
     else if(F[0].dur<F[1].dur)
      printf("%s %s ",F[0].name,F[1].name);
     else if(F[0].dur=F[1].dur)
        {
        if(strcmp(F[0].time,F[1].time)>0)
      printf("%s %s ",F[1].name,F[0].name);
     else     
      printf("%s %s ",F[0].name,F[1].name);
      }
      }
    else
      printf("%s %s",F[0].name,F[1].name);
    
    if(F[2].price=F[3].price)
      {
        if(F[2].dur>F[3].dur)
     	 printf("%s",F[3].name);
     else if(F[2].dur<F[3].dur)
      printf("%s",F[2].name);
     else if(F[2].dur=F[3].dur)
        {
        if(strcmp(F[2].time,F[3].time)>0)
      printf("%s",F[3].name);
     else     
      printf("%s",F[2].name);
      }
      }
    else
      printf("%s",F[2].name);
   
  printf("\n");
  }
    return 0;
}
