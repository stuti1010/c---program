#include<iostream>
#include<math.h>

using namespace std;
///printing the roots of quadratic equation///

int main()
{
    int a,b,c;
    float r1,r2;
    cout<<"enter a,b,c";
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"the roots are "<<r1<<" "<<r2;
    return 0;
}
