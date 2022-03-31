#include<iostream>
using namespace std;

#define isCtrl(c) (c >= 0 && c <= 31 && c!= '\n' && c != '\t')

int main()
{
    char c, prec =0;      // character and predecessor
    long nCtrl = 0, nChar = 0;  // Number of the following
                                // control charaters or other characters

    while(cin.get(c))
    {
        if(isCtrl(c)){
            ++nCtrl;
            nChar = 0;
        }else
        {
    
                if(nCtrl > 0)
                {
                    cout.put(' ');
                    nCtrl = 0;
                }
                switch(++nChar){
                    case 1: break;
                    case 2: cout.put(prec);
                    default: cout.put(c);
                }
                prec = c;
            
        }
    }
    return 0;
}