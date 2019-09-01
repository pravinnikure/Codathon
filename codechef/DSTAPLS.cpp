/*
  https://www.codechef.com/problems/DSTAPLS
*/

#include <iostream>
using namespace std;

int main()
{
  short int T;
  cin>>T;
  
  while(T--)
  {
    long long int N, K, M=0;
    cin>>N>>K;
    
    M = N/K;
    
    if( M%K==0 )
    {
        cout<<"NO"<<endl; //both distribute same
    }
    else
    {
        cout<<"YES"<<endl; //bith distribute differently
    }
  }
  
  return 0;
}    