/*
  https://www.codechef.com/problems/FSQRT
*/

#include <iostream>
#include<math.h>

using namespace std;

int main() {
	int t, num;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    cin>>num;
	    cout<<int(sqrt(num))<<endl;
	}
	
	return 0;
}

