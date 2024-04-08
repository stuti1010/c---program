///DSA:-forward_list container
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> v={2,4,6,7,3};
    v.push_front(45);
    v.push_front(50);
    v.push_front(30);
    v.pop_front();
    cout<<"using for-each loop"<<endl;
    for(int x:v)
    {
        cout<<x<<endl;
    }
    ///or
    cout<<"using iterator"<<endl;
    forward_list<int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<<++*itr<<endl;
    }
    cout<<"using for-each loop"<<endl;
    for(int x:v)
    {
        cout<<x<<endl;
    }

    return 0;
}
