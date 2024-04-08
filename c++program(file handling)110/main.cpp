///writing in file( file handling 1):-
#include<iostream>
#include<fstream>
using namespace std;
 int main()
 {
     ofstream outfile("student.txt");
     outfile<<"hello everyone!"<<endl;
     outfile<<"25"<<endl;
     outfile.close();

 }
