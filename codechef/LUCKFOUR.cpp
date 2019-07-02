/*
  https://www.codechef.com/problems/LUCKFOUR
*/

#include <iostream>
using namespace std;

int main() {
	int t, num;
	cin>>t;
	
	while(t--)
	{
	  int count=0;  
	  cin>>num;
	  
	  while(num>0)
	  {
	     if(num%10 == 4)
	     {
	         count++;
	     }
	     num/=10;
	  }
	  
	  cout<<count<<endl;
	}
	
	return 0;
}

