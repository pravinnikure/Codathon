/*
   https://www.codechef.com/problems/SILLYPRS  Problem from June Lunchtime
 */

#include <iostream>
using namespace std;

int main()
{
   int t,n;
   cin>>t;
   
   for(int i=0; i<t; i++)
   {
       cin>>n;
       long long int A[n],B[n],sum=0;;
       int item;
       
       int start=0, end=n-1;
       for(int k=0; k<n; k++)
       {
           cin>>item;
           
           if(item%2==0)
           {
               A[start]=item;
               start++;
           }
           else
           {
               A[end]=item;
               end--;
           }
       }
       
       start=0, end=n-1;
       for(int k=0; k<n; k++)
       {
           cin>>item;
           
           if(item%2==0)
           {
               B[start]=item;
               start++;
           }
           else
           {
               B[end]=item;
               end--;
           }
       }
       
       for(int i=0; i<n; i++)
       {
           sum= sum+(A[i]+B[i])/2;
       }
       
       cout<<sum<<endl;
   }
	
	return 0;
}

