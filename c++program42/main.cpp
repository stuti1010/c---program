#include <iostream>

using namespace std;
///printing upper triangle pattern#5///
int main()
{
    int i,j;
    for(i=5;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}