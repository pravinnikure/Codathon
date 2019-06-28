/*
  https://www.codechef.com/problems/FLOW006
*/

#include <iostream>
using namespace std;

int sum(int num)
{
    int r, sum=0;
    if(num == 0)
      return 0;
      
    while(num>0)
    {
      r = num%10;
      sum +=r;
      num = num/10;
    }
    
    return sum;
}

int main() 
{
    int t;
   
    cin>>t;
    int arr[t], ans[t];
	
    for(int i=0; i<t; i++)
    {
       cin>>arr[i];   
       ans[i] = sum(arr[i]);
       cout<<ans[i]<<endl;
    }
	
    return 0;
}
