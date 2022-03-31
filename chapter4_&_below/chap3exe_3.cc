#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string defined("I have learned something new again "), line1, line2, format(45, '-');
    cout << "The length of the given string is "<< defined.length()<<endl;

    cout << format<<endl;
    cout << "Enter the first line that doesnot exceed the line "<<endl;
    getline(cin, line1);
    cout << "Enter the second line that doesnot exceed the one line " <<endl;
    getline(cin, line2);

    cout << line1 << " + "<<line2<<endl;

    return 0;

}