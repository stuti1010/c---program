#include<iostream>
using namespace std;
///printing table by using loop///
int main()
{
    int i,n,table;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        table=i*n;
        cout<<n<<"*"<<i<<"="<<table<<endl;
    }
    return 0;
}
