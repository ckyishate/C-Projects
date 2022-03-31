#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    long euro, maxEuro;  //Amount in Euros
    double rate ;         // Exchange rate 


    cout << "\n* * * TABLE OF EXCHANGE"
         <<" Euro - US-$ * * *\n\n";

    cout <<"\nPlease enter the rate of exchange: "
           " one  Euro in US-$: ";
    cin >> rate;
    cout <<"\nPlease enter maximum euro: ";
    cin >> maxEuro;
    cout << '\n'
         <<setw(12) << "Euro" << setw(20) <<"US-$"
         <<"\t\tRate: "<< rate << endl;

    cout << fixed << setprecision(2) << endl;

    long lower, upper, step;

    for(lower =1, step=1; lower <= maxEuro ; step*=10, lower = 2*step)
        for(euro = lower, upper = step*10; euro <= upper && euro <= maxEuro; euro+=step)
            cout << setw(12) << euro 
                 << setw(20) << euro*rate << endl;


    return 0;
}