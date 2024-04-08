#include<iostream>
using namespace std;
///writing a class for student with roll no,name,marks of 3 subject and///
///function of total marks,grades and required method///
class student{
private:
    int roll_no;
    string name;
    float chem_marks;
    float phy_marks;
    float math_marks;
public:
    student(int r,string n,float c,float p,float m)
    {
        roll_no=r;
        name=n;
        chem_marks=c;
        phy_marks=p;
        math_marks=m;
    }
    int totalmarks()
    {
        return chem_marks+phy_marks+math_marks;
    }
    char grades()
    {
        int per;
        per=totalmarks()/3;
        if(per>70)
        return 'A';
    else if(per>=40 && per<60)
        return 'B';
    else
    return 'C';
    }
};
int main()
{
    int roll;
    string name;
    float c,p,m;
    cout<<"enter the roll number of student:";
    cin>>roll;
    cout<<"enter the name of student:";
    cin>>name;
    cout<<"enter the marks of three subjects:";
    cin>>c>>p>>m;
    student s(roll,name,c,p,m);
    cout<<"the total marks of student is: "<<s.totalmarks()<<endl;
    cout<<"the grade of student is: "<<s.grades()<<endl;
    return 0;
}
