/* https://www.codechef.com/problems/INTEST  */
#include<iostream>

using namespace std;

int main()
{       
  int n, k;

  int count=0;

  cin>>n>>k;
  int arr[n];

  for(int i=0; i<n; i++)
  {
     cin>>arr[i];
  }

  for(int i=0; i<n; i++)
  {
    if(arr[i]%k == 0)
    {
      count++;
    }
  }
  

  cout<<count<<endl;


  return 0;
} 
