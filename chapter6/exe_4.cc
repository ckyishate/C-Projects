#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int main(){
    int i, randomNumber, guess, play=1,x;

    srand(230);
    
    


    while(play==1){
        cout<<"\nEnter 1 to continue and any to quit: ";
        if(!(cin >> x  && x == 1)){
            cout << "\nNice time. Till next time"<<endl;
            play = 0;
            break;
        }else{
            randomNumber = rand()%15 + 1;
            

            for(i=0; i<3;i++){
                cout<< i<<".Trial: ";
                cin>>guess;

                if(guess == randomNumber){
                    cout <<"\nCongrajulation. You guessed right\n"<<endl;
                    break;
                }else if (guess > randomNumber)
                    cout <<"\nYour guess is larger than the number\n" <<endl;
                else
                    cout <<"\nYour guess is smallet than the number \n"<< endl;
            }
            if(guess != randomNumber)
                cout<<"\n Sorry your chances are done\n";
            continue;
        }
    }
    return 0;
}