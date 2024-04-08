#include<iostream>
using namespace std;

///calculating the average using array///

int main()
{
    int arr[10];
    int i;
    float sum=0,avg;
    for(i=0;i<=10;i++)
    {
        cout<<"enter the number"<<i<<":";
        cin>>arr[i];
    }
    for(i=0;i<=10;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/10;
    cout<<"the sum is:"<<sum<<endl;
    cout<<"the average is:"<<avg<<endl;
    return 0;
}
