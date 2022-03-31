#include<iostream>
using namespace std;
int main(){
    float x, y, min;

    cout << "Enter two different numbers: \n";
    if(cin >> x && cin >> y)
    {
        if(x < y)
            min = x;
        else
            min  = y;
        cout << "\nThe smaller number is : " << min << endl;
    }else
        cout << "\nInvalid Input!" << endl;

    return 0;
}