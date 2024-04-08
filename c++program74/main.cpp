#include<iostream>
using namespace std;
///example of inheritance->rectangle & cuboid///
class rectangle{
private:
    int length;
    int breadth;
public:
    rectangle();
    rectangle(int l,int b);
    rectangle(rectangle &r);
    int setlength(int l);
    int setbreadth(int b);
    int  getlength(){return length;}
    int  getbreadth(){return breadth;}
    int area();
    int perimeter();
};
class cuboid:public rectangle{
private:
    int height;
public:
    cuboid(int h)
    {
        height=h;
    }
   int setheight(int h)
   {
       if(h>0)
        height=h;
       else
        height=1;
   }
   int getheight(){return height;}
   int volume()
   {
       return getlength()*getbreadth()*height;
   }
};
int main()
{
    cuboid c(5);
    c.setlength(10);
    c.setbreadth(7);
    cout<<"volume of cuboid is:"<<c.volume()<<endl;
    return 0;
}
rectangle::rectangle()
{
    length=1;
    breadth=1;
}
rectangle::rectangle(int l=0,int b=0)
{
    length=l;
    breadth=b;
}
rectangle::rectangle(rectangle &r)
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



