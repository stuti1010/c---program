#include<iostream>
using namespace std;
class student
{
public:
    string name;
    int id;
public:
    void get()
    {
        cout<<"enter id,name:";
        cin>>id>>name;
    }
};
