#include<iostream>
using namespace std;

///printing factorial of number by using for loop///

int main()
{
    int i,n,fact=1;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<"the factorial of number "<<n<<" is "<<fact<<endl;
    return 0;
}
