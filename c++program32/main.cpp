#include<iostream>
using namespace std;
///printing the sum of array///
int main()
{
    int A[10];
    int i,sum=0;
    for(i=0;i<=10;i++)
    {
        cout<<"enter the number "<<i<<":"<<endl;
        cin>>A[i];
    }
    for(i=0;i<=10;i++)
    {
        sum=sum+A[i];
    }
    cout<<"the sum of all numbers is: "<<sum<<endl;
    return 0;
}
