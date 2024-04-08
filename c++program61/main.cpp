#include<iostream>
using namespace std;
///using static variable in function///
void fun()
{
    static int v=0;
    v++;
    int a=10;
    cout<<v<<" "<<a<<endl;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}
