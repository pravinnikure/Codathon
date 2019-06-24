#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
  int amount;
  double ini_bal, rem_bal;

  cin>>amount;
  cin>>ini_bal;


  if(amount%5 == 0)
  {
    if((ini_bal-amount-0.50)>0)
    {
      rem_bal = ini_bal-amount-0.50;
      cout<<rem_bal<<endl;
    }
    else
    {
      cout<<ini_bal<<endl;
    }
  }
  else
  {
      cout<<ini_bal<<endl;
  }
  
   
  

  return 0;
}

