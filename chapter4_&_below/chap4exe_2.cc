#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double num1 = 0.123456;
    double num2 = 23.987, num3 = -123.456;

    cout << left<< setw(15) << num1 <<endl;
    cout << fixed <<setprecision(4)<<setw(12) << right<< num2 <<endl;
    cout << scientific << setprecision(4) << num3<<endl;

    return 0;
}