#include<iostream>
using namespace std;
/// stream operator overloading///
class complex{
private:
    int real;
    int img;
public:
    complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
friend ostream & operator<<(ostream &o,complex &c);
};
ostream &operator<<(ostream &o,complex &c)
{
    o<<c.real<<"+i"<<c.img<<endl;
}
int main()
{
    complex c(10,5);
    cout<<c<<endl;
    return 0;
}
