#include<iostream>
using namespace std;

///printing the result using else-if ladder///
int main()
{
    int e,h,p,c,m;
    float total,per;
    cout<<"enter the marks:";
    cin>>e>>h>>p>>c>>m;
    total=e+h+p+c+m;
    per=total/5;
    if(per>=80)
    {
        cout<<"A+,Excellent job!"<<endl;
    }
    else if(per>=60)
    {
        cout<<" A,Good job!"<<endl;
    }
    else if(per>=50)
    {
        cout<<"B+,well try!"<<endl;
    }
    else if(per>=40)
    {
        cout<<"B,Work Hard"<<endl;
    }
    else
    {
        cout<<"Fail"<<endl;
    }
    return 0;
}
