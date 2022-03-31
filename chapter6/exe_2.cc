#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x, y,i;
    cout <<"*   *   *   MULTIPLICATION TABLE    *   *"<<endl;
    for(x=0;x<=10;x++){
    
        cout << setw(13)<<x;
    }
        
    cout << "\n"<<endl;
    

    for(x = 1; x <= 10 ; x++){
        cout <<setw(13)<<x;
        for(y=1; y<=10 ; y++)
        {
            cout << setw(13)<< x*y;
        }
        cout <<endl;
    }
    
}