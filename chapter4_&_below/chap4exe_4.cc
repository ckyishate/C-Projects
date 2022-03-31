#include<iostream>

using namespace std;

int main()
{
    int code;
    char ch;
    cout << "\nEnter any character code of integer: ";
    cin >> code;
    ch = code;
    cout << "Character :"<< ch <<endl
         << "Decimal-code: " << code<<endl
         << "Octal-code: " << oct << code <<endl
         << "hex-code: " << hex << code << endl;

    return 0;
}