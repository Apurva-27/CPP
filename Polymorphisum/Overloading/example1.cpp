#include <iostream>

using namespace std;

class Demo
{
    public:
        int add(int no1,int no2)
        {
            return no1+no2;
            
        }
        
        int add(int no1,int no2,int no3)
        {
            return no1+no2+no3;
            
        }
};

int main()
{
    Demo *p=NULL;
    
    p=new Demo;
    int iret=0;
    
    iret=p->add(3,5);
    cout<<iret<<"\n";
    
    iret=p->add(3,5,5);
    cout<<iret<<"\n";
    
    return 0;
}
