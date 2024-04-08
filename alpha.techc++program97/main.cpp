///pre-increment unary operator using operator overloading in class///
#include<iostream>
using namespace std;
class D
{
    int feet,inch;
public:
    void get()
    {
        cout<<"enter feet,inch";
        cin>>feet>>inch;
    }
    void operator ++();
    void display();
};
void D::operator ++()
{
    feet=++feet;
    inch=++inch;
}
void D::display()
{
    cout<<feet<<endl<<inch<<endl;
}
int main()
{
    D d1;
    d1.get();
    ++d1;
    d1.display();
    return 0;
}
