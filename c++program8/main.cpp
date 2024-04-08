#include<iostream>

using namespace std;
///printing volume of cylinder//

int main()
{
    int r,h;
    float volume;
    cout<<"enter the radius:";
    cin>>r;
    cout<<"enter the height:";
    cin>>h;
    volume =3.14*r*r*h;
    cout<<"volume of cylinder is: "<<volume;
    return 0;
}
