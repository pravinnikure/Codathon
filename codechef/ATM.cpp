#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
  double acc_bal, rem_bal;
  int withdrawl;
  
  cin>>withdrawl;
  cin>>acc_bal;
  
  if(withdrawl>(acc_bal-withdrawl-0.50) && (withdrawl%5 == 0))
  {
      rem_bal = acc_bal-withdrawl-0.50;
      cout<<rem_bal<<endl;
  }
  else{
      cout<<acc_bal<<endl;
  }

  return 0;
}

