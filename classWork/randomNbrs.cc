#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    unsigned int i, seed;

    cout  << "\n Please type an integer between  0 and  65535 : ";

    cin >> seed;
    srand(seed);



    for(i = 1; i <= 20 ; ++i){
        cout << setw(20) << i << ". random number = "
        << setw(3) << (rand() % 100000 + 1) << endl;
    }
}