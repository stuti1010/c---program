#include<iostream>
using namespace std;
///return by address//
int *fun(int n)
{
    int *p=new int[n];
    int i;
    for(i=0;i<n;i++)
        p[i]=i+1;
        cout<<i<<endl;
    return p;
}
int main()
{
    int *ptr=fun(5);
    int i;
    for(i=0;i<5;i++)
        cout<<i<<endl;
    return 0;
}
