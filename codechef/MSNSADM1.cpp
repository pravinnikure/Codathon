/*
  https://www.codechef.com/AUG19B/problems/MSNSADM1
*/

#include<iostream>

using namespace std;

int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
        int players;
        cin>>players;
        int max=0, newMax=0;
        int goals[players], fouls[players];
        
        for(int i=0; i<players; i++)
        {
          cin>>goals[i];   
        }
        
        for(int i=0; i<players; i++)
        {
          cin>>fouls[i];   
        }
        
        
        
        for(int i=0; i<players; i++)
        {
            newMax = goals[i]*20 - fouls[i]*10;
            
            if(newMax > max)
            {
                max = newMax;
            }
        }
        
        cout<<max<<"\n";
    }
    
    return 0;
}
