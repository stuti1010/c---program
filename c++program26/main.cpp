#include<iostream>
using namespace std;

/*printing sum of factor of number n and checking whether it is perfect
number or not by using for loop*/

int main()
{
    int i,n,sum=0;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            {
                sum+=i;
            }
    }
    cout<<"the sum of all factor of number "<<n<<" is "<<sum<<endl;
    if(2*n==sum)
        cout<<"the number is perfect number"<<endl;
    else
        cout<<"the number is not a perfect number"<<endl;
     return 0;
}
