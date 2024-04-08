#include<iostream>
using namespace std;
///acess specifiers///
class base{
private:
    int a;
protected:
    int b;
public:
    int c;
    void funbase()
    {
        a=50;
        b=40;
        c=89;
    }
};
class derived:public base
{
public:
    void funderived()
    {
    //a=10;
    b=20;
    c=30;
    }
};
int main()
{
    base b;
    //b.a=1;
    //b.b=2;
    b.c=3;
    cout<<b.c<<endl;
}
