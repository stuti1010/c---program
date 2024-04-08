///finding maximum number withe the use of function overloading///
#include<iostream>
using namespace std;
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
    cout<<"the maximum is: "<<max(2,8)<<endl;
    cout<<"the maximum is: "<<max(5.6,5.5)<<endl;
    return 0;
}
