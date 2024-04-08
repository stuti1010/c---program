#include<iostream>
using namespace std;
///linear search in array///
int main()
{
    int arr[10];
    int i,found;
    for(i=0;i<10;i++)
    {
        cout<<"enter the number"<<i<<":"<<endl;
        cin>>arr[i];
    }
    cout<<"enter the number you would like to search:";
    cin>>found;
    for(i=0;i<10;i++)
    {
        if(found==arr[i]){
            cout<<"the number is found at "<<i<<" "<<endl;
            return 0;
    }

    }
        cout<<"the number is not found!"<<endl;
            return 0;
    }
