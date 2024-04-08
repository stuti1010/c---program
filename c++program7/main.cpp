#include<iostream>
#include<math.h>

using namespace std;
///calculating speed///

int main()
{
    int u,v,a;
    float speed;
    cout<<"enter the no:";
    cin>>u>>v>>a;
    speed=(v*v-u*u)/(2*a);
    cout<<"speed is "<<speed;
    return 0;
}
