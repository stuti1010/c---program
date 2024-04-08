///exception handling///program->1
#include<iostream>
using namespace std;
class A
{
public:
    int a,b,c;
    void set()
    {
        cout<<"enter a and b:";
        cin>>a>>b;
    }
    void exp()
    {
        try
        {
            if(b!=0)
            {
                c=a/b;
                cout<<c<<endl;
            }
            else
            {
                throw "divide by zero";
            }
            }
            catch(const char *e)
            {
                cout<<e;
            }
        }
};
int main()
{
    A a1;
    a1.set();
    a1.exp();
    return 0;
}
