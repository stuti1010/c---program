///DSA:-vector container
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={2,4,6,7,3};
    v.push_back(45);
    v.push_back(50);
    v.push_back(30);
    v.pop_back();
    cout<<"using for-each loop"<<endl;
    for(int x:v)
    {
        cout<<x<<endl;
    }
    ///or
    cout<<"using iterator"<<endl;
    vector<int>::iterator itr;
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
