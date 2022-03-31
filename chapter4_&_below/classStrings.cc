#include<iostream>   //declaration of cout and cin
#include<string>    //declaration of the string class

using namespace std;

int main(){
    //define four strings
    string prompt("what is your name: "),
           name,            //an empty 
           line(40, '-'),   //string with 40 -
           total = "Hello ";


           cout << prompt;
           getline(cin, name);    //inputs a name in one line

           total = total + name ;   // concatenates and assigns a string 
           
           cout << line << endl  // outputs line and name
                << total <<endl;
           cout << "Your name is " //putputs length
                << name.length() <<" characters length! "<<endl;
           cout << line << endl;

           return 0;

} 