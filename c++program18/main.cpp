#include<iostream>
using namespace std;
///checking whether the character by using switch-case statement///
int main()
{
    char ch;
    cout<<"enter any character:";
    cin>>ch;
    switch(ch)
    {
    case 'a':
    case 'A':
    cout<<"the character is vowel"<<endl;
    break;
    case 'e':
    case 'E':
    cout<<"the character is vowel"<<endl;
    break;
    case 'i':
    case 'I':
    cout<<"the character is vowel"<<endl;
    break;
    case 'o':
    case 'O':
    cout<<"the character is vowel"<<endl;
    break;
    case 'u':
    case 'U':
    cout<<"the character is vowel"<<endl;
    break;
    default:
    cout<<"the character is consonant"<<endl;
    break;
    }
    return 0;
}
