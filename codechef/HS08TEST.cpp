#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  //amount - balance to withdraw
  //balance - initial balance
  //rem_bal - balance after successful transaction
  int amount;
  float balance, rem_bal;

  cin>>amount;
  cin>>balance;


  if(amount%5==0)
  {
     if(amount<balance && ((amount+0.5)<=balance))
     {
         rem_bal = balance-amount-(0.5);
         cout<<std::setprecision(2)<<fixed<<rem_bal<<endl;
     }
     else
     {
         cout<<std::setprecision(2)<<fixed<<balance<<endl;
     }
  }
  else
  {
      cout<<std::setprecision(2)<<fixed<<balance<<endl;
  }

  return 0;
}

