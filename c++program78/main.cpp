#include<iostream>
using namespace std;
class employee{
private:
    int id;
    string name;
public:
    employee(int i,string n)
    {
        id=i;
        name=n;
    }
    int getempoyeeID(){return id;}
    string getname(){return name;}
};
class fulltime_employee:public employee{
private:int salary;
public:
    fulltime_employee(int i,string n,int s):employee(i,n)
    {
        salary=s;
    }
    int getsalary(){return salary;}
};
class parttime_employee:public employee{
private:int wages;
public:
    parttime_employee(int i,string n,int w):employee(i,n)
    {
        wages=w;
    }
    int getwages(){return wages;}
};
int main()
{
    fulltime_employee p1(1,"john",5000);
    parttime_employee p2(2,"johnny",500);
    cout<<"the salary of "<<p1.getname()<<" is "<<p1.getsalary()<<" "<<endl;
    cout<<"the wages of "<<p2.getname()<<" is "<<p2.getwages()<<" "<<endl;
    return 0;


}
