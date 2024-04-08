///reading a file in c++:-
#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream infile;
    infile.open("student.txt");
    if(infile)
    cout<<"file can not be open"<<endl;
    string str;
    int x;
    infile>>str;
    infile>>x;
    cout<<str<<" "<<x<<endl;
    if(infile.eof())
    {
        cout<<"end of file reached"<<endl;
    }
    infile.close();
}
