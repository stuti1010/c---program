///template->used for defining generic funtion///
///data types are templates variables and they work for many data types///
#include<iostream>
using namespace std;
template <class T>
T sum(T a,T b)
{
    return a+b;
}
int main()
{
    cout<<sum(2,4)<<endl;
    cout<<sum(2.7f,6.4f)<<endl;
    return 0;
}
