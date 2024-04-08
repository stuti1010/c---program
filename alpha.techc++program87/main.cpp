///program of adding two numbers using classes///
#include<iostream>
using namespace std;
class add
{
private:

    int n1;
    int n2;
    int c;
public:
    /*add(int a,int b)
    {
        n1=a;
        n2=b;
    }*/
    int input()
    {
        cout<<"enter the numbers: ";
        cin>>n1>>n2;
    }
    int calculate()
    {
        c=n1+n2;
    }
    int output()
    {
        cout<<"the addition of the number"<<n1<<" and "<<n2<<" = "<<c<<endl;
    }
};
int main()
{
    add a;
    //add a(3,7);
    a.input();
    a.calculate();
    a.output();
    return 0;
}
