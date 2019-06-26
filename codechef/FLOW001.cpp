/* https://www.codechef.com/problems/FLOW001 */

#include<iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;

  int in_arr[n][2];

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<2; j++)
    {
      cin>>in_arr[i][j];
    }
  }


  for(int i=0; i<n; i++)
  {
    for(int j=0; j<1; j++)
    {
      cout<<in_arr[i][0] + in_arr[i][1]<<endl;
    }
  }


  return 0;
}

