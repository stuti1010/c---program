#include<iostream>
using namespace std;
///printing array using auto->without checking the type of array just display any value///
int main()
{
    char A[]={'A',66,'C',68};
    int i;
    for(auto x:A)
    {
        cout<<x<<endl;
    }
    return 0;
}
