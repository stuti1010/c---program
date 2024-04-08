#include<iostream>
using namespace std;
///checking condition using logical operator//

int main()
{
    int age;
    cout<<"enter the age:";
    cin>>age;
    if(age>=12 && age<=50)
        cout<<"eligible for work"<<endl;
    else
        cout<<"not eligible for work"<<endl;
    return 0;
}
