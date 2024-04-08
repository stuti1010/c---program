#include<iostream>
using namespace std;
///displaying all type of function members using scope resolution operator///
class rectangle{
private:
    int length;
    int breadth;
public:
    rectangle();
    rectangle(int l=0,int b=0);
    rectangle (rectangle &r);
    int setlength(int l);
    int setbreadth(int b);
    int getlength(){return length;}
    int getbreadth(){return breadth;}
    int area();
    int perimeter();
    bool issquare();
    ~rectangle();
};
int main()
{
    rectangle r(10,10);
    cout<<"area of rectangle is:"<<r.area()<<endl;
    cout<<"perimeter of rectangle is:"<<r.perimeter()<<endl;
    if(r.issquare())
        cout<<"yes"<<endl;
    return 0;
}

rectangle::rectangle()///non-argument constructor
{
    length=1;
    breadth=1;
}
rectangle::rectangle(int l,int b)///parameterized constructor
{
    length=l;
    breadth=b;
}
rectangle::rectangle(rectangle &r)///copy constructor
{
    length=r.length;
    breadth=r.breadth;
}
int rectangle::setlength(int l)
{
    if(l>0)
        length=l;
    else
        length=1;
}
int rectangle::setbreadth(int b)
{
    if(b>0)
        breadth=b;
    else
        breadth=1;
}
int rectangle::area()
{
    return length*breadth;
}
int rectangle::perimeter()
{
    return 2*(length+breadth);
}
bool rectangle::issquare()
{
    return length==breadth;
}
rectangle::~rectangle()
{
    cout<<"rectangle destroyed"<<endl;
}

