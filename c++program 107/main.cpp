#include <iostream>
using namespace std;

namespace first
{
    void fun()
    {
        cout<<"fun of first"<<endl;
    }
}
namespace second
{
    void fun()
    {
        cout<<"fun of second"<<endl;
    }
}

using namespace first;

int main()
{
    fun();
    second::fun();
    return 0;
}
