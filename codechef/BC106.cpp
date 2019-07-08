/*
  https://www.codechef.com/problems/BC106
*/

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
  int T;
  cin>>T;
  long long int sum = 0;
  
  while(T--)
  {
     long int num;
     cin>>num;
     
     sum = sum + num;
  }
  
  cout<<sum<<endl;
  
  return 0;   
}
