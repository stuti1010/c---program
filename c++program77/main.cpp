#include<iostream>
using namespace std;
///Ways of Inheritance///
class parent{
private:int a;
protected :int b;
public:
 int c;
 void funparent()
 {
     a=10;
     b=20;
     c=30;
 }
};
class child:private parent
{
public:
    void funchild()
    {
        //a=5;
        b=15;
        c=25;
    }
};
class grandchild:public child
{
public:
    void fungrandchild()
    {
       // a=7;
        //b=13;
        //c=21;
    }
};
int main()
{
    child c;
   // c.a=1;
    //c.b=3;
    //c.c=4;
}
