/*
  https://www.codechef.com/problems/ARRPROB
*/

#include <iostream>
using namespace std;

int main() 
{
   short int T;
   cin>>T;
   
   while(T--)
   {
       //Number of elements
       int N;
       cin>>N;
       long long int arr[N],  sum=0;
       int count=0;
       
       //Accpted array elements
       for(int i=0; i<N; i++)
       {
           cin>>arr[i];
           sum = sum + arr[i];
       }
       
       for(int i=0; i<N; i++)
       {
           cout<<(sum-arr[i])<<" ";
       }
       
       cout<<endl;
   }
}
