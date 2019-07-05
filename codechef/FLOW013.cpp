/*
  https://www.codechef.com/problems/FLOW013
*/

#include <iostream>
using namespace std;

int main()
{
   short int N, A, B, C;
   cin>>N;
   
   while(N--)
   {
       cin>>A>>B>>C;
       
       if( (A+B+C) == 180 )
       {
           cout<<"YES"<<endl;
       }else{
           cout<<"NO"<<endl;
       }
   }
}

