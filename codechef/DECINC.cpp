/*
  https://www.codechef.com/problems/DECINC
*/

#include <iostream>
using namespace std;

int main() {
    short int N;
    cin>>N;
    
    if(N%4 == 0)
    {
        cout<<(N+1)<<endl;
    }else{
      cout<<(N-1)<<endl;    
    }
    
	return 0;
}

