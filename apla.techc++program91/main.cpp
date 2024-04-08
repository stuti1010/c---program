///program to find total no of days in a given months enter by user///
#include<iostream>
using namespace std;
class totaldays
{
private:
    int months;
public:
    int input()
    {
        cout<<"enter the month: ";
        cin>>months;
    }
    int calculate()
    {
        if(months==1||months==3||months==5||months==7||months==8||months==10||months==12)
        {
            cout<<"the month is of 31 days!"<<endl;
        }
        else if(months==2)
        {
            cout<<"the months is of 28 days!"<<endl;
        }
        else
        {
            cout<<"the month is of 30 days!"<<endl;
        }
    }

};
int main()
{
    totaldays t;
    t.input();
    t.calculate();
    return 0;
}
