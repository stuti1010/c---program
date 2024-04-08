#include<iostream>
using namespace std;
///printing the reverse number by using loop//

int main()
{
    int i,num,rem,rev=0;
    cout<<"enter the number:";
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    cout<<"the reverse is: "<<rev<<endl;
    return 0;
}
