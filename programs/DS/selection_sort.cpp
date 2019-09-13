/*
 * Problem :- Selection Sort Implementation
 */

#include<iostream>

using namespace std;

int main()
{
  int n, temp, i, j, min_index;
  cin>>n;
  int arr[n];

  for(i=0; i<n; i++)
  {
    cin>>arr[i];
  }

  for(i=0; i<n-1; i++)
  {
    min_index = i;

    for(j=i+1; j<n; j++)
    {
        if(arr[min_index]>arr[j])
        {
           min_index = j;
        }		
    }

    temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp; 
  }
	
  cout<<"\n";

  for(i=0; i<n; i++)
  {
    cout<<arr[i]<<"\t";
  }

  return 0;	
}
