///printing fibonacci series with constructor using class//
#include<iostream>
using namespace std;
class fibonacci
{
    int n1,n2,n,i,next_term=1;
public:
    fibonacci()
    {
        n1=1;
        n2=2;
    }
    fibonacci(int a=0,int b=0)
    {
        n1=a;
        n2=b;
    }
    fibonacci(fibonacci &f)
    {
        n1=f.n1;
        n2=f.n2;
    }
    void set()
    {
        cout<<"enter the number:";
        cin>>n;
    }
    void calculate()
    {
        for(i=1;i<=n;i++)
        {
            if(i==1)
            {
                cout<<n1<<" , ";
                continue;
            }
            if(i==2)
            {
                cout<<n2<<" , ";
                continue;
            }
            next_term=n1+n2;
            n1=n2;
            n2=next_term;
            cout<<next_term<<" , ";
        }
    }
};
int main()
{
    fibonacci f(1,2);
    fibonacci f2(f);
    f.set();
    f.calculate();
    return 0;
}
