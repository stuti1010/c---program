#include<iostream>
using namespace std;
///return by reference///
int &fun(int &a)
{
    cout<<a;
    return a;
}
int main()
{
    int x=10;
    fun(x);
    x=25;
    cout<<x<<" "<<x<<endl;
    //fun(x)=25;
    //cout<<x<<endl;
}
