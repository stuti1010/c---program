#include<iostream>
using namespace std;
///Inheritance in C++///
class base{
public:
    int a;
    void display()
    {
        cout<<"display from base:"<<a<<endl;
    }
};
class derived:public base
{
public:
void show()
{
    cout<<"show from derived:"<<a<<endl;
}
};
int main()
{
    derived d;
    d.a=10;
    d.display();
    d.show();
    return 0;
}
