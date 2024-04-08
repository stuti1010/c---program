#include<iostream>
#include<math.h>
using namespace std;

///checking the number is armstrong or not///

int main()
{
    int n,rem,sum=0,temp,power=0;
    cout<<"enter the number:";
    cin>>n;
    temp=n;
    while(n!=0)
    {
        n/=10;
        power++;
    }
    n=temp;
    while(n>0)
    {
        rem=n%10;
        sum=sum+pow(rem,power);
        n/=10;
    }
    if(temp==sum)
    {
        cout<<"the number "<<temp<<" is amstrong number!"<<endl;
    }
    else
    cout<<"the number "<<temp<<" is not amstrong number!"<<endl;
    return 0;
}
