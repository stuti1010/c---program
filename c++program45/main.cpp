#include <iostream>

using namespace std;
///performing binary subtraction in array///
int main()
{
    int A[2][3]={3,3,3,3,3,3};
    int B[2][3]={1,1,1,1,1,1};
    int C[2][3];
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            C[i][j]=A[i][j]-B[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
