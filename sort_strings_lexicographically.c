/*
Given a list of strings,sort them in lexicographical order i.e. dictionary order.
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains the number of strings in it followed by the actual strings.
Function void sortStrings(int num, char str[][50]) will take the number of strings and a two-dimensional array of strings as parameters and print them in sorted order.
For each test case, print the strings as space separated list in lexicographical order (without space after last string) in newlines.
*/

#include <string.h>

void sortStrings(int num, char str[][50])
{ char temp[50];
 for(int j=0;j<num-1;j++)
 {
   for(int i=0; i<num-1; i++)
        {
            if(strcmp(str[i], str[i+1])<0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[i+1]);
                strcpy(str[i+1], temp);
           
            }
        }
 }
for(int i=num-1; i>=0;i--)
//for(int i=0;i<num;i++)
  if(i==0)
      printf("%s",str[i]);
    else
 printf("%s ",str[i]);

// printf("%d",strcmp(str[0], str[1]));
}