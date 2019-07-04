/*
  https://www.codechef.com/problems/HOWMANY
*/

#include <iostream>
using namespace std;

int main() {
    int N, count=0;
	cin>>N;
	int copy = N;
   	
	while(N>0)
	{
	  N=N/10;
	  count++;
	}
	if(copy==0)
	{
	    cout<<1<<endl;
	}
	else if(count>3)
	{
	    cout<<"More than 3 digits"<<endl;
	}
	else
	{
	   cout<<count<<endl;
	}
	
	return 0;
}
