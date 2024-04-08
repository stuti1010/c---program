/// friend class->when one class is a friend of another class is called friend class//
#include<iostream>
using namespace std;
class B;///forward declaration//
class A
{
    int a;
public:
    A()
    {
        a=10;
    }
    friend class B;
};
class B
{
    int b,c;
public:
    B()
    {
        b=20;
    }
    void add(A a1)
    {
        c=a1.a+b;
        cout<<c;
    }
    void show(A &a2)
    {
        cout<<endl<<a2.a;
        cout<<endl<<b<<endl<<c;
    }
};
int main()
{
    A a1;
    B b1;
    b1.add(a1);
    b1.show(a1);
    return 0;
}
