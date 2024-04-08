#include<iostream>
using namespace std;
///function overloading->find maximum///
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
float max(float a,float b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int c=max(10,20);
    float d=max(2.7f,6.3f);
    cout<<"the maximum is:"<<c<<endl;
    cout<<"the maximum is:"<<d<<endl;
    return 0;
}
