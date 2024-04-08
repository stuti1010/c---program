#include<iostream>
using namespace std;

///printing numbers from one to 10 using do-while loop//

int main()
{
    int n,i=1;
    cout<<"enter the number:";
    cin>>n;
    do
    {
        cout<<i<<endl;
        i++;
    }
    while(i<=n);
    return 0;
}
