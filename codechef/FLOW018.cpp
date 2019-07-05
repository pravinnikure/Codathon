/*
  https://www.codechef.com/problems/FLOW018
*/

#include <iostream>
using namespace std;

int main() 
{
   short int T;
   cin>>T;
   
   while(T--)
   { 
       short int N;
       long long int fact=1; 
       cin>>N;
       
       for(int i=1; i<=N; i++)
       {
           fact = fact*i;
       }
       
       cout<<fact<<endl;
   }
}
