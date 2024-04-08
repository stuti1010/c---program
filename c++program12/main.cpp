#include<iostream>
using namespace std;

///printing maximum number using if-else statements///

int main()
{
    int n1,n2;
    cout<<"enter the two numbers:";
    cin>>n1>>n2;
    if(n1>n2)
    {
        cout<<"maximum number is "<<n1;
    }
    else
        cout<<"maximum number is "<<n2;
    return 0;
}
