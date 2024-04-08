///program to calculate factorial using class///
#include<iostream>
using namespace std;
class factorial
{
private:
    int n,fact=1,i;
public:
    int input()
    {
        cout<<"enter the number: ";
        cin>>n;
    }
    int calculate()
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<"the factorial of number "<<n<<" is "<<fact<<endl;
    }
};
int main()
{
    factorial f;
    f.input();
    f.calculate();
    return 0;
}
