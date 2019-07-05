/*
 https://www.codechef.com/problems/DIFFSUM
*/

#include<iostream>

using namespace std;

int main()
{
    signed short int N1, N2;
    cin>>N1;
    cin>>N2;
    
    if(N1>N2)
    {
        cout<<N1-N2<<endl;
    }
    else if(N1<N2 || N1==N2 )
    {
        cout<<N1+N2<<endl;
    }
}
