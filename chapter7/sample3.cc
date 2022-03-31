// toupper.cpp: A filter that converts to capitals

#include<iostream>
#include<cctype>   //macros definition
using namespace std;

int main()
{
    char c;
    long nChar = 0,         //counts all characters
         nConv = 0;         // and converts characters 

    while(cin.get(c)){      // As long as a character
        ++nChar;            // can be read, to increment
        if(islower(c))      //lower case letter?
        {
            c = toupper(c); //Converts the character
            ++nConv;        // and counts it
        }
        cout.put(c);        // outputs the character
    }
    clog << "\nTotal of characters:  "<<nChar
         <<"\nTotal of converted characers: "<< nConv
         << endl;
    return 0;

}