/*
  https://www.codechef.com/submit/FLOW007
*/

#include <iostream>
using namespace std;

int reverse(int num)
{
    int rev = 0;
    
    while(num > 0)
    {
        int r = num%10;
        rev = rev*10+r;
        num = num/10;
    }
    
    return rev;
}

int main() {
	int t,num, ans;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    cin>>num;
	    ans = reverse(num);
	    cout<<ans<<endl;
	}
	
	return 0;
}

