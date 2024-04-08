///call by reference-> there is a reference variable(&) used..
///reference variable is a powerful feature of c++...
///reference variable is an alias to existing variable...
///it creates a new name to an existing variable...
///syntax:- datatypes &(reference variable)=(existing variables)...
///for ex:-int &b=a(b is the another name of a)....
#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=10,b=20;
    swap(a,b);
    cout<<"the value after swap: "<<a<<" "<<b<<endl;
    return 0;
}
