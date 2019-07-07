/*
  https://www.codechef.com/problems/SHEC3
*/

#include <iostream>
using namespace std;

int main() 
{
   short int N;
   cin>>N;
   
   for(int i=0; i<N; i++)
   {
     char ch;
     cin>>ch;
     int num = (int)ch;
     int r,rev=0;  
     
     while(num > 0)
     {
        r = num%10;
        rev = rev*10+r;
        num = num/10;
     }
     
     cout<<rev<<endl;
   }
}

