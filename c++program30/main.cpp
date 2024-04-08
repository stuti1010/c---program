#include<iostream>
using namespace std;
///printing the HCF of two numbers///

int main()
{
    int a,b,result;
    cout<<"enter the numbers:";
    cin>>a>>b;
    result=(a>b)?a:b;
    while(result>0)
    {
        if(a%result==0 && b%result==0)
    {
        break;
    }
    result--;
    }
    cout<<"HCF of two number is: "<<result;
    return 0;
}
