///default arguments->optional arguments of any function...
///they are always intialized from right to left...
///program will overwrite the default value over the actual value...
#include<iostream>
using namespace std;
int max(int a=0,int b=0,int c=0)
{
    if(a>b)
    {
        if(a>c)
            return a;
        else
            return c;
    }
    else
    {
        if(b>c)
            return b;
        else
            return c;
    }
}
int main()
{
    cout<<max()<<endl;
    cout<<max(2)<<endl;
    cout<<max(2,5)<<endl;
    cout<<max(5,7,9)<<endl;
    return 0;
}
