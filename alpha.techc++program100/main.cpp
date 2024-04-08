///program of adding two complex number using operator overloading///
#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int img;
    public:
        void get()
        {
            cout<<"enter real ,imaginary:";
            cin>>real>>img;
        }
    complex operator +(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.get();
    c2.get();
    c3=c1+c2;
    c1.display();
    c2.display();
    cout<<"the addition of above complex number is:"<<endl;
    c3.display();
    return 0;
}
