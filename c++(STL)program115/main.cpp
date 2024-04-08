///DSA:-list container
#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l={2,4,6,7,3};
    l.push_back(45);
    l.push_back(50);
    l.push_back(30);
    l.pop_back();
    l.remove(6);
    cout<<"using for-each loop"<<endl;
    for(int x:l)
    {
        cout<<x<<endl;
    }
    ///or
    cout<<"using iterator"<<endl;
    list<int>::iterator itr;
    for(itr=l.begin();itr!=l.end();itr++)
    {
        cout<<++*itr<<endl;
    }
    cout<<"using for-each loop"<<endl;
    for(int x:l)
    {
        cout<<x<<endl;
    }

    return 0;
}
