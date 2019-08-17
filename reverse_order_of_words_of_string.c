/*
Given a string of words, reverse the order of words in the string individually, not the whole string.
The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. Each test case contains the string str.
Function void revWordsOrder(char *str) will take the string as parameter and reverse the order of words of string.
For each test case, print the resultant string in new lines.
*/

#include <string.h>

void revWordsOrder(char *str)
{
   char *str3;
    char *ptr[5];
    int a=0,m=0,i;
    char delim[]=" ";
    char *token=strtok(str,delim);
    str3=token;
    ptr[a]=str3;
    a++;
    while(token!=NULL)
    {
        token=strtok(NULL,delim);
       if(token!= NULL)
       {
         str3=token;
        ptr[a]=str3;
        a++;
       }
    }
    for(i=a-1;i>=1;i--)
    {
        printf("%s ",ptr[i]);
    }

}
