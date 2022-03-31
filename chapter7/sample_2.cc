#include<iostream>
#include<string>
using namespace std;

#define DELAY 10000000L     //Output delay
#define CLS (cout << "\033[2J") // clear screen
#define LOCATE(z,s)  (cout <<"\033["<<z <<';'<<s<<'H')
    // Position the cursor in row z and column s

int main()
{
    int x=2, y=3, dx=1, speed=0;
    string floor(79, '-'), header = " **** JUMPING BALL****";

    CLS;
    LOCATE(1,25);     cout << header;
    LOCATE(25,1);     cout << floor;

    while(true)       // let the ball "always" bounce
    {                 // Terminate by interrupt key (^c) 
        LOCATE(x,y);    cout << 'o' << endl;  // Show the ball
        for(long wait = 0; wait < DELAY; ++wait)
            if(x==1 || x==79) dx=-dx;   //Bounce off a wall; on the floor

        if(y == 24)
        {
            speed =-speed;
            if(speed == 0) speed = -7;     //Restart
        }
        speed +=1;                          // Acceleraion = 1
        LOCATE(y,x);  cout << ' ';          // Clear output
        y += speed; x+=dx;                   // New Position
    }
}