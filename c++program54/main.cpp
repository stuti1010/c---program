#include<iostream>
using namespace std;
///using of function templates///
template<class T>
T maxim(T a,T b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    cout<<"the maximum is:"<<maxim(21,64)<<endl;
    cout<<"the maximum is:"<<maxim(3.5f,8.9f)<<endl;
    return 0;
}
