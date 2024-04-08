#include<iostream>
using namespace std;
class demo
{
public:
    int *p;
    demo()
    {
        p=new int[10];
        cout<<"constructor of demo"<<endl;
    }
    ~demo()
    {
        delete []p;
        cout<<"destructor of demo"<<endl;
    }
};
void fun()
{
    demo d;
}
int main()
{
    fun();
    return  0;
}
