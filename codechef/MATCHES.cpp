#include <iostream>
using namespace std;

int main() 
{
    short int t;
    cin>>t;
    
    while(t--)
    {
        int n1, n2;
        cin>>n1>>n2;
        
        int n = n1+n2, sum=0;
        
        while(n>0)
        {
            int r = n%10;
            
            if(r==0){
              sum+= 6;    
            }
            else if(r==1){
              sum+= 2;    
            }
            else if(r==2){
              sum+= 5;   
            }
            else if(r==3){
              sum+= 5;    
            }
            else if(r==4){
              sum+= 4;    
            }else if(r==5){
              sum+= 5;    
            }
            else if(r==6){
              sum+= 6;    
            }
            else if(r==7){
              sum+= 3;    
            }
            else if(r==8){
              sum+= 7;    
            }
            else if(r==9){
              sum+= 6;    
            }
            
            n=n/10;
        }
        
        cout<<sum<<endl;
    }
	return 0;
}
