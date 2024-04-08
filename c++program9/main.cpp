#include<iostream>
#include<math.h>

using namespace std;

///calculating the distance between two points///

int  main()
{
    int x1,x2,y1,y2;
    float d;
    cout<<"enter the first points:";
    cin>>x1>>y1;
    cout<<"enter the second points:";
    cin>>x2 >>y2;
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<"distance between two points is: "<<d;
    return 0;
}
