#include<iostream>
using namespace std;
///special calculator using switch-case statement///

int main()
{
    char mathoperation;
    float num1,num2;
    cout<<"enter the two number:";
    cin>>num1>>num2;
    cout<<"enter the operation you would like to choose:";
    cin>>mathoperation;
    switch(mathoperation)
    {
    case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
        break;
    case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
        break;
    case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
        break;
    case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
        break;
    default:
        cout<<"invalid choice"<<endl;
    }
    return 0;
}
