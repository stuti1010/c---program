#include<iostream>
using namespace std;
///linear search by->function with array///
int search(int n)
{
    int found,i;
    int arr[10];
    for(i=0;i<=10;i++)
    {
        if(arr[i]==n)
            found=0;
            break;
    }
    if(found==1)
    cout<<"the number "<<n<<" is not found!"<<endl;
    else
        cout<<"the number "<<n<<" is found!"<<endl;

}
int main()
{
    int i,n;
    int arr[10];
    for(i=0;i<=10;i++)
    {
        cout<<"enter the number"<<i<<":";
        cin>>arr[i];
    }
    cout<<"enter the number you would like to search:";
    cin>>n;
    search(n);
    return 0;

}
