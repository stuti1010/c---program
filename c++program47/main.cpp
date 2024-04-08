#include<iostream>
using namespace std;
///Pointers///
int main()
{
    int x=10;
    int *p=&x;
    cout<<x<<endl;///value of x
    cout<<&x<<endl;///address of x
    cout<<p<<endl;///address of x
    cout<<&p<<endl;///address of p
    cout<<*p<<endl;///value of x
    return 0;
}
