///program of polymorphism :-
#include<iostream>
using namespace std;
 class base
 {
 public:
    virtual int operation(int a,int b)=0;
 };
 class addition:public base
 {
 public:
     int operation(int a,int b)
     {
         return a+b;
     }
 };
  class substraction:public base
 {
 public:
     int operation(int a,int b)
     {
         return a-b;
     }
 };
  class multiplication:public base
 {
 public:
     int operation(int a,int b)
     {
         return a*b;
     }
 };
  class division:public base
 {
 public:
     int operation(int a,int b)
     {
         return a/b;
     }
 };
 int main()
 {
     base *p;
     addition add;
     substraction sub;
     multiplication multi;
     division div;
     p=&add;
     cout<<"the addition is: "<<p->operation(3,5)<<endl;
      p=&sub;
    cout<<"the substraction is: "<<p->operation(4,6)<<endl;
    p=&multi;
     cout<<"the multiplication is: "<<p->operation(7,8)<<endl;
     p=&div;
     cout<<"the division is: "<<p->operation(5,10)<<endl;
     return 0;

 }
