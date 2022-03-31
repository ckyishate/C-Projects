#include<iostream>
#include<stdlib.h>  //prototype for srand() and rand()
#include<iomanip>
using namespace std;

int main(){
    unsigned int i, seed;

    cout << "\nPlease enter an integer between 0 and 67859" <<endl;
    cin >> seed;

    for(i=0; i<=20; i++){
        cout << setw(20)<< i<<". random Number: "<< rand()%100 + 1<<endl;
    }

    return 0;
}