#include<iostream>
#include<cstdlib>


using namespace std;
int main(){
    unsigned int seed;
    int z1, z2, z3;

    cout << "  --- Random Numbers ----\n" <<endl;
    cout << "To intialize the random number generator ,"
        << "\n please enter an integer value: ";
    cin >> seed;    // Input an integer

    srand(seed);   // and use it as argument for a new sequence of random numbers.

    z1 = rand();
    z2 = rand();
    z3 = rand();

    cout << "\nThree random numbers:  "<< z1 <<" "<<z2<<" "<< z3 <<endl;
                

    return 0;

}