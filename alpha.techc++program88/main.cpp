///program to find largest number using classes///
#include<iostream>
using namespace std;
class findmax
{
private:
    int n1,n2,n3;
public:
    findmax(int a,int b,int c)
    {
        n1=a;
        n2=b;
        n3=c;
    }
    /*int input()
    {
        cout<<"enter the value of number: ";
        cin>>n1>>n2>>n3;
    }*/
    int calculate()
    {
        if(n1>n2)
        {
            if(n1>n3)
                return n1;
            else
                return n3;
        }
        else
        {
            if(n2>n3)
                return n2;
            else
                return n3;
        }
    }
    int output()
    {
        cout<<"the maximum is: "<<calculate()<<endl;
    }
};
int main()
{
    findmax f(26,17,8);
    ///f.input();
    f.calculate();
    f.output();
    return 0;
}
