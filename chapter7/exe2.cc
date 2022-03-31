#include<iostream>
#include<string>
using namespace std;
#include<conio>   //for kbhit() and getch()
#include "myMacro.h"

#define ESC 27      //ESC terminates the program
unsigned long delay = 5000000;  // delay for output

int main()
{
    int x =2, y=2, dx=1, speed = 0;
    bool end = false;
    string floor(80, '-'),
            header = "**** BOUNCING BALL********",
            commands ="[Esc] = Terminate   "
                      "[+] =  speed up  [-] = slow down ";


    COLOR(WHITE, BLUE);      CLS;
    LOCATE(1, 25); cout << header;
    LOCATE(24, 1); cout << floor;
    LOCATE(25, 10);  cout << commands;



    while(!end)         // as long as the flag is not set
    {
        LOCATE(x,y); cout << 'o';   // show the ball
        for(long wait = 0; wait < delay; ++wait);

        if(y == 23)
        {
            speed = -speed;
            if(speed == 0) speed =-7;    // kick
        }
        speed +=1;

        LOCATE(y,x); cout << ' ';       // clear screen
        y+=speed; x+= dx;

        if(kbhit() != 0)
        {
            switch(getch())
            {
                case '+':delay -= delays/5; break;
                case '-':delay += delays/5; break;
                case ESC:  end=true;    
            }
        }
    }
    NORMAL; CLS;
    return 0;

}
 





