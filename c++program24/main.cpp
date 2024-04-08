#include<iostream>
using namespace std;

///printing the sum of natural number upto n by using for loop//

int main()
{
    int i,n,sum=0;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"the sum is "<<sum<<endl;
    return 0;
}
