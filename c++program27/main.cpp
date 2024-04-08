#include<iostream>
using namespace std;

///checking whether the number is prime or composite number///

int main()
{
    int num,i,flag=0;
    cout<<"enter the number:";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            flag++;
        }
    }
     if(flag==2)
            cout<<"the number "<<num<<" is prime number"<<endl;
        else
          cout<<"the number "<<num<<" is composite number"<<endl;
          return 0;
    }
