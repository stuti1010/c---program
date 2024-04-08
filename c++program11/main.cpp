#include<iostream>
using namespace std;
///program to calculate net salary program//

int main()
{
    float salary;
    float allowances;
    float deduction;
    float netsalary;
    cout<<"enter the current salary:";
    cin>>salary;
    cout<<"enter the percentage of allowances:";
    cin>>allowances;
    cout<<"enter the percentage of deduction:";
    cin>>deduction;
    netsalary=salary+salary*allowances/100-salary*deduction/100;
    cout<<"the net salary is: "<<netsalary<<endl;
    return 0;
}
