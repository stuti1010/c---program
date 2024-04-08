#include<iostream>
using namespace std;
///using constructor in c++///
class Rectangle{
private:
    int length;
    int breadth;
public:
    Rectangle(int l=1,int b=1)
    {
        length =l;
        breadth=b;
    }
    Rectangle(Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }
    int setlength(int l)
    {
        if(l>0)
        length=l;
        else
            length=1;
    }
    int setbreadth(int b)
    {
        if(b>0)
         breadth=b;
         else
            breadth=1;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int primeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    Rectangle r(10,5);
    Rectangle r2(r);
    cout<<r2.area()<<endl;
    return 0;
}
