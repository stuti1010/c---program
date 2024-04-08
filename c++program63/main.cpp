#include<iostream>
using namespace std;
///using class in c++///
class Rectangle{
public:
int length;
int breadth;
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
    Rectangle r1,r2;
    r1.length=10;
    r1.breadth=5;
    cout<<"the first area is:"<<r1.area()<<endl;
    cout<<"the first perimeter is:"<<r1.perimeter()<<endl;
    cout<<endl;
    r2.length=20;
    r2.breadth=3;
    cout<<"the second area is:"<<r2.area()<<endl;
    cout<<"the second perimeter is:"<<r2.perimeter()<<endl;

    return 0;
}
