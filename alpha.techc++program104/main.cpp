#include<iostream>
using namespace std;
int division(int ,int);
int main()
{
    int a=10,b=5,c;
    try
    {
        c=division(a,b);
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"division by zero"<<endl;
    }
    cout<<"bye"<<endl;
}
int division(int x,int y)
{
    if(y==0)
    throw 1;
    return x/y;

}
