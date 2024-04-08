#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,4,6,8,10};
    int *p=A,*q=&A[4];
    cout<<*p<<endl;///value->2
    cout<<endl;
    p++;
    cout<<*p<<endl;///value->4
    cout<<endl;
    p--;
    cout<<*p<<endl;///value->2
    cout<<endl;
    cout<<p<<endl;///address of A
    cout<<p+2<<endl;///address of A+2
    cout<<endl;
    cout<<*p<<endl;///value->2
    cout<<*(p+2)<<endl;///value->6
    cout<<endl;
    cout<<q-p<<endl;///value->4
    cout<<p-q<<endl;///value->-4
    return 0;
}
