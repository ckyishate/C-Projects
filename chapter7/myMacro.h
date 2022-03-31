
#ifndef _MYMACROS_
#define _MYMACROS_

#include <iostream>
using namespace std;

#define ABS(a) ((a)>=0 ? (a):-(a))

#define MIN(a,b)  ((a) <= (b) ? (a) : (b))

#define MAX(x,y) ((a) >= (b) ?  (a) : (b))

#define CLS     (cout << "\033[2J")

#define LOCATE(r,c) (cout <<"\033["<< (r) <<';'<<(c)<<'H')

#define COLOR(f,b) (cout <<"\033[1;3"<<(f) \
                          << ";4" << (b) << 'm' << flush)


#define BLACK 0
#define RED 1
#define GREEN 2
#define YELLOW 3
#define BLUE 4
#define MANGENTA 5
#define CYAN 6
#define BLACK 7

#define INVERS (cout << "\033[7m") //the following output is inverted

#define NORMAL (cout << "\033[0m")

#endif        // 



