// A program containing errors!
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;
int main()
{
string message("\nLearn from your mistakes!");
cout << message << endl;
int len = message.length();
cout << "Length of the string: " << len << endl;
// And a random number in addition:
int a, b;
srand(12.5);
b = rand();
cout << "\nRandom number: " << b << endl;
return 0;
}