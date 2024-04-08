#include<iostream>
using namespace std;
///printing maximum number in the array///

int main()
{
    int arr[10]={7,9,5,6,4,7,3,2,0,7};
    int i,max;
    max=arr[0];
    for(i=0;i<=10;i++)
    {
        if(arr[i]>max)
            max=i;
    }
    cout<<"the maximum number is: "<<max<<endl;
    return 0;

}
