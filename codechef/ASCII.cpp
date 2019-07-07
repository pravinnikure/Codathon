/*
  https://www.codechef.com/problems/HOWMANY
*/

#include <iostream>
using namespace std;

int main() 
{
  int T;
  cin>>T;
  
  while(T--)
  { 
      int len, min;
      cin>>len;
      char str[len];
      
      for(int i=0; i<len; i++)
      {
         cin>>str[i];
      }
      
      min = (int)str[0];
      for(int i=0; i<len; i++)
      {
         if( (int)str[i] < min )
         {
             min = (int)str[i];
         }
      }
      
      cout<<(char)min<<endl;
  }
}

