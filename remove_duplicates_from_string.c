/*
Given a sorted string, remove all the duplicate letters from the string. For example, aabbccdef is a sorted string in which alphabets are in increasing order from a to z and will become abcdef after removal of duplicate characters.
The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. Each test case contains a string str.
Function void remDuplicates(char *str) will take the string as parameter and modify it as specified.
For each test case, print the new string in new lines.
*/

void remDuplicates(char *str)
{
  int i=0,k=0,j,m=0;
  while(str[i]!='\0')
  {
    m++;
    i++;
  }
  
   i=0;
  while(str[i]!='\0')
  {
    k=1;
     while(str[i+k]==str[i])
     {
       k++;
     }
     
      if(k>1)
      {
      j=i;
      for(j=i;str[j+k]!='\0';j++)
      {
      str[j+1]=str[j+k];
      }
      str[j+1]='\0';
      }
    
    i++;
  }
  
}
