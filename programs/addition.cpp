//Adding two numbers without using + operator
#include<iostream>

using namespace std;

int main()
{
  int num1, num2;
  cin>>num1>>num2;

  for(int i=0; i<num2; i++)
  {
     num1 = ++num1;
  }

  cout<<"Addition is : "<<num1;

  return 0;	
}

