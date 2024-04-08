#include<iostream>
using namespace std;
class myexception1:exception
{

};
class myexception2:myexception1
{

};
int main()
{
    try
    {
        throw myexception1();
    }
    catch(myexception2 e)
    {
        cout<<"int catch"<<endl;
    }
    catch(myexception1 e)
    {
        cout<<" catch"<<endl;
    }
    catch(...)
    {
        cout<<"all catch"<<endl;
    }

}
