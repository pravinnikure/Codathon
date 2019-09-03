/*
 https://www.quora.com/Why-do-we-need-virtual-function
*/

#include<iostream>

using namespace std;

class parent
{
  public:
        virtual void function()
        {
          cout<<"Parent's function";
        }
};

class child : public parent
{
  public:
        void function()
        {
          cout<<"Child's function";
        }
};


int main()
{
  parent p;
  child c;

  parent *ptr;
  ptr=&c;

  ptr->function();

  return 0;
}
