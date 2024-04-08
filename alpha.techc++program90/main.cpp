///program to sort an array using classes///
#include<iostream>
using namespace std;
class sortofarray
{
private:
    int n,i,j,a,number[30];
public:
    int input()
    {
        cout<<"enter the size of number: ";
        cin>>n;
        cout<<"enter the number: ";
        for(i=0;i<=n;i++)
        {
            cin>>number[i];
        }
    }
    void calculate()
    {
        for(i=0;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(number[i]>number[j])
                {
                    a=number[i];
                    number[i]=number[j];
                    number[j]=a;
                }
            }
        }
    }
    int output()
    {
        cout<<"the array are shorted in ascending order: "<<endl;
        for(i=0;i<=n;i++)
        {
            cout<<number[i]<<endl;
        }
    }
};
int main()
{
    sortofarray s;
    s.input();
    s.calculate();
    s.output();
    return 0;
}
