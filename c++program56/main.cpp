#include<iostream>
using namespace std;
///function with pass-by-value
int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=10,y=20;
    swap(x,y);
    cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
    return 0;
}
