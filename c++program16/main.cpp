#include<iostream>
using namespace std;
///finding maximum using nested-if statements//

int main()
{
    int a,b,c;
    cout<<"enter the number:";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
            cout<<"a is greater!"<<endl;
        else
            cout<<"c is greater!"<<endl;
    }
else
{
    if(b>c)
        cout<<"b is greater!"<<endl;
    else
        cout<<"c is greater!"<<endl;
}
return 0;
}
