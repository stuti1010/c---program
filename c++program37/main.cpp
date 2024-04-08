#include<iostream>
using namespace std;
///counting a variable using array///

int main()
{
    int arr[10]={2,4,5,6,7,8,7,5,8,5};
    int i,count=0;
    for(i=1;i<=10;i++)
    {
        if(arr[i]!=0)
            count++;
    }
    cout<<"total number of digits are:"<<count<<endl;
    return 0;
}
