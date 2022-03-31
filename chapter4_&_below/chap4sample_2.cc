#include <iostream>
using namespace std;
int main()
{
double x = 12.34;
cout.precision(3); // Precision 2
cout << " By default: " << x << endl;
cout << " showpoint: " << showpoint << x << endl;
cout << " fixed: " << fixed << x << endl;
cout << " scientific: " << scientific << x << endl;
return 0;
}