#include<iostream>
using namespace std;
///printing multi-dimensional or 2-D array///
int main()
{
    int arr[2][3]={1,2,3,4,5,6};
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

///another method by using auto///

    for(auto& x:arr)
  {
    for(auto& y:x)
    {
        cout<<y<<" ";
    }
    cout<<endl;
  }
}
