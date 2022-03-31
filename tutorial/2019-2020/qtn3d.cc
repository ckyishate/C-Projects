#include<iostream>
#include<iomanip>
using namespace std;

int main(){

cout.width(14);
cout.fill('&');
cout.precision(4);
cout.setf(ios::internal,ios::adjustfield);
cout.setf(ios::scientific);
cout.setf(ios::showpos);


cout<<+724.2687<<endl;


    return 0;
}