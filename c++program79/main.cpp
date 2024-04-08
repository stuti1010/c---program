#include<iostream>
using namespace std;
///base class pointer pointing to derived class object///
class base{
public:
    void fun1()
    {
        cout<<"fun of base"<<endl;
    }
};
class derived:public base{
public:
    void fun2()
    {
        cout<<"fun of derived"<<endl;
    }
};
int main()
{
    derived d;
    base *ptr=&d;
    ptr->fun1();
    //ptr->fun2();
    return 0;
}
