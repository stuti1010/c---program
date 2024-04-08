///program of post & pre increment using operator overloading///
#include<iostream>
using namespace std;
class D
{
    int feet ,inch;
public:
    void input()
    {
        cout<<"enter feet,inch:";
        cin>>feet>>inch;
    }
    void operator --(int);
    void display();
};
void D::operator--(int)
{
    feet--;
    inch--;
}
void D::display()
{
    cout<<feet<<endl<<inch<<endl;
}
int main()
{
    D d1;
    d1.input();
    d1--;
    d1.display();
    return 0;
}
