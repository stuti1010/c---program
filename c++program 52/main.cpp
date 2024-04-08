#include<iostream>
using namespace std;
///function overloading//

int sum(int a, int b)
{
    return a+b;
}
float sum(float a, float b)
{
    return a+b;
}
float sum(int a,int b,int c )
{
    return a+b+c;
}
int main()
{
    cout<<sum(12,45)<<endl;
    cout<<sum(2.3f,4.5f)<<endl;
    cout<<sum(2,5,7)<<endl;
    return 0;
}
