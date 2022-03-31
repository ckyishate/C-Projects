#include<iostream>
using namespace std;

void intvalue(int a, int b, int c=10);

#include<iostream>
using namespace std;
int main (){
    cout.setf(ios::fixed);
    cout.precision(3);
    int k=cout.precision(6);
    cout.precision(k);
    cout<<42.468924<<"\n"
}