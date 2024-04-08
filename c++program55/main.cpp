#include<iostream>
using namespace std;
///using default argument///
int maxim(int a=0,int b=0,int c=0)
{
    if(a>b && a>c)
        return a;
    else if(b>c)
        return b;
    else
        return c;
}
int main()
{
    cout<<maxim()<<endl;
    cout<<maxim(10)<<endl;
    cout<<maxim(10,15)<<endl;
    cout<<maxim(10,15,20)<<endl;
    return 0;
}
