#include<iostream>
using namespace std;

///finding the maximum index value using array///

int main()
{
    int arr[10];
    int i,maxindex;
    for(i=0;i<=10;i++)
    {
        cout<<"enter the number"<<i<<":";
        cin>>arr[i];
    }
    maxindex=0;
    for(i=0;i<=10;i++)
    {
        if(arr[i]>arr[maxindex])
            maxindex=i;
    }
    cout<<"the maximum index value is: "<<maxindex<<endl;
    return 0;
}
