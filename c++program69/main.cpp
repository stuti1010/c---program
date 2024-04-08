#include<iostream>
using namespace std;
///operator overloading///
class complex
{
private:
    int real;
    int img;
public:
complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    void display()
    {
        cout<<real<<"+i"<<img<<endl;
    }
};
int main()
{
    complex c1(5,7),c2(10,1),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}
