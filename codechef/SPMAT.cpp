/*
  https://www.codechef.com/problems/SPMAT
*/

#include<iostream>

using namespace std;

int main()
{
    short int Test, N;
    
    cin>>Test;
    
    while(Test--)
    {
        cin>>N;
        int arr[N][N];

        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                cin>>arr[i][j];
            }
        }
        

	int T=0, B=N-1, L=0, R=N-1;
        int dir=0;

	while(L<=R && T<=B)
	{
	  	
           if(dir==0)
	   {
             for(int i=T; i<=R; i++)
	     {
               cout<<arr[T][i]<<" ";
	        
	     }
              T++;
	      dir=1;  	     
	   }
	   else if(dir == 1)
	   {
               for(int i=T; i<=B; i++)
	       {
                cout<<arr[i][R]<<" ";
               }
               R--;
	       dir=2;    
		       
	   }
           else if(dir == 2)
	   {
              for(int i=R; i>=L; i--)
	      {
                cout<<arr[B][i]<<" ";     
	      }
              B--;
	      dir=3; 
	   }
           else if(dir == 3)
	   {
              for(int i=B; i>=T; i--)
	      {
                cout<<arr[i][L]<<" ";
	      }	   
	      L++;
	      dir=0;    
	   }
	}
    }
    
    return 0;
}
