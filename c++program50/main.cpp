#include<iostream>
using namespace std;
///adding two numbers using function///
float add(float x,float y)
{
    float z;
    z=x+y;
    return z;
}
int main()
{
    float x=2.3,y=7.9,z;
    z=add(x,y);
    cout<<"sum is:"<<z<<endl;
    return 0;
}
