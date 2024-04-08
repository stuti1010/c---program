#include <iostream>
using namespace std;
///printing the lower triangle pattern///
int main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=i;j>0;j--)
        {
            cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
