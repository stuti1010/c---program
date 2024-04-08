#include<iostream>
using namespace std;
///finding maximum between three numbers///
int max(int a,int b,int c)
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
    int a=100,b=10,c=20,r;
    r=max(a,b,c);
    cout<<"the maximum is:"<<r<<endl;
    return 0;

}
