#include <iostream>

using namespace std;

class Demo
{
    public:
  int x,y;
  
  Demo()
  {
      cout<<"\nInside default constructor.";
  }
  
  Demo(int a, int b)
  {
        cout<<"\nInside parametrized constructor.";    
  }
  
 ~Demo()
 {
     cout<<"\nInside destructor.";
 }
 
 void fun()
 {
     cout<<"\nInside fun.";
 }
    
};

int main()
{
    Demo *p=NULL;
    Demo *q=NULL;
    
    p=new Demo;
    p->fun();
    delete p;
    
    q=new Demo(11,12);
    q->fun();
    delete q;
    
    return 0;
}
