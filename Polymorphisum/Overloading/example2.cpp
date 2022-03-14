#include <iostream>

using namespace std;

class Demo
{
    public:
        int add(int no1,int no2)
        {
            return no1+no2;
            
        }
        
        float add(float no1,float no2)
        {
            return no1+no2;
            
        }
};

int main()
{
    Demo *p=NULL;
    
    p=new Demo;
    
    int iret=0;
    float fret=0;
    
    iret=p->add(3,5);
    cout<<iret<<"\n";
    
    fret=p->add(3.5f,5.2f);
    cout<<fret<<"\n";
    
    return 0;
}

/*

8
8.7 

*/
