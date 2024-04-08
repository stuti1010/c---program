///operator overloading->same function name and different parameter///
#include<iostream>
 using namespace std;
 int sum(int a,int b)
 {
     return a+b;
 }
 int sum(int a,int b,int c)
 {
     return a+b+c;
 }
 float sum(float a,float b)
 {
     return a+b;
 }
 int main()
 {

     cout<<sum(2,4)<<endl;;
     cout<<sum(2,4,6)<<endl;
     cout<<sum(2.3f,5.4f)<<endl;
     return 0;
 }
