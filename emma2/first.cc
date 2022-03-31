#include<iostream>
using namespace std;
int main(){

    float celicious=0, fahren;

    for(fahren=20;fahren<=100;fahren+=5)
    {
        celicious = 5*((fahren-32)/9);
        cout << celicious << " is the celicious value of " << fahren <<endl;


    }
    return 0;
}