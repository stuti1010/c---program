///static variable->they area just like global variable but can be accessed in the function they are declared..
///they are created in data section..
///they are history sensitive..
#include<iostream>
using namespace std;
void fun()
{
    static int v=0;
    v++;
    int a=5;
    cout<<v<<" "<<a<<endl;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}
