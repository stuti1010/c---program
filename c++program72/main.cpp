#include<iostream>
using namespace std;
class rational{
private:
    int p;
    int q;
public:
    rational(int p=0,int q=0)
    {
        this->p=p;
        this->q=q;
    }
    rational(rational &r)
    {
        this->p=r.p;
        this->q=r.q;
    }
    setP(int p)
    {
        this->p=p;
    }
    setQ(int q)
    {
        this->q=q;
    }
    getP(){return p;}
    getQ(){return q;}
    rational operator+(rational r)
    {
        rational t;
        t.p=this->p*r.q+this->p*r.q;
        t.q=this->q*r.q;
        return t;
    }
friend ostream & operator<<(ostream &o,rational &r);
};
ostream & operator<<(ostream &o,rational &r)
{
    o<<r.p<<"/"<<r.q;
    return o;
}
int main()
{
    rational r1(5,4),r2(3,2),r3;
    r3=r1+r2;
    cout<<"the sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;
    return 0;
}
