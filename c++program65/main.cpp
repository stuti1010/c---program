#include<iostream>
using namespace std;
///using data hiding ///
class Rectangle{
private:
    int length;
    int breadth;
public:
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
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    Rectangle r;
    r.setlength(10);
    r.setbreadth(5);
    cout<<"length of rectangle:"<<r.getlength()<<endl;
    cout<<"breadth of rectangle:"<<r.getbreadth()<<endl;
    cout<<"area of rectangle:"<<r.area()<<endl;
    cout<<"perimeter of rectangle:"<<r.perimeter()<<endl;
    return 0;
}
