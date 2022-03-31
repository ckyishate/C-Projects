#include<iostream>
#include<string>
using namespace std;



int search(struct getCustomerInfo customer[], string acc_nbr);

class Account{
    string accountowner;
    string accountnumber;
    string account_type;
    protected:
        float balance;
        float min_bal_accept;

    public:
        Account(string name, float bal);
        Account(string name, float bal, string acc_no, string acc_type );
        float deposit();
        
        void display();
        void get_info(string acc_no, string acc_type);
        
};


class Curr_Account : public Account{

    public:
        Curr_Account(string name, float bal) : Account(name, bal){min_bal_accept = 3000;};
        Curr_Account(string name, float bal,  string acc_no, string acc_type) : Account(name, bal,acc_no,acc_type){};
        float chequetransaction();
    
};



class Sav_Account : public Account{

    public:
        Sav_Account(string name, float bal) : Account(name, bal){min_bal_accept = 4500;};
        Sav_Account(string name, float bal,  string acc_no, string acc_type) : Account(name, bal,acc_no,acc_type){};
        float com_interest();
        float withdraw();      
};

// structures
struct getCustomerInfo{
    string name;
    float initialDeposit;
    string accountnbr;
    string accounttype;

};


//****************MAIN FUNCTION********************************
int main()
{
    char reply;
    getCustomerInfo object[100];
    int nextindex=1;

    system("clear");

    cout <<"....................BANKING SYSTEM..................................."<<endl<<endl;

    while(1){

        cout <<endl<<"To continue press 'y' &" << endl << "Any other key to stop:  ";
        cin.get(reply);
        cin.clear();
        cin.ignore();

        reply = tolower(reply);

        if(reply != 'y'){

            cout <<"Thanks for using the system "<<endl<<endl;
            break;
        }

        system("clear");

         cout << "Select one option"<<endl
         <<"1. Open up an account" <<endl
         <<"2. Already have one "<<endl<<endl
         <<"Choice: ";

         int choice1;

        while(!((cin>>choice1) && (choice1 ==1 || choice1 == 2))){

            cout<<"Enter 1 or 2"<< endl;
            cin.clear();
            cin.ignore();
            
        }
        system("clear");

        if(choice1== 1){
            cout <<"Which type of account do you prefer:"<<endl
                 <<"1. Saving Account"<<endl
                 <<"2. Current Account" <<endl<<endl
                 <<"Choice: ";

            int accountchoice;

            while(!((cin>>accountchoice) && (choice1 ==1 || choice1 == 2))){

                cout<<"Enter 1 or 2"<< endl;
                cin.clear();
                cin.ignore();
            
            }

            if(accountchoice == 1){

                system("clear");

                cout <<"Enter your full name: ";

                cin.ignore();  getline(cin, object[nextindex].name);

        
                cout <<"Enter  initial balance not less than 5000: ";

            
                while(!((cin>>object[nextindex].initialDeposit) && object[nextindex].initialDeposit >= 5000)){
                
                    cout <<"Initial deposit should not be less than 5000: ";
                    cin.clear();
                    cin.ignore();

                }
                Sav_Account acc(object[nextindex].name, object[nextindex].initialDeposit);

                string accnbr = "7008763768" + to_string(nextindex);
            
                acc.get_info(accnbr, "Saving");

                object[nextindex].accountnbr = accnbr;
                object[nextindex].accounttype = "Saving";
                nextindex++;
                acc.display();
            
            }else{
                system("clear");

                cout <<"Enter your full name: ";

                cin.ignore();  getline(cin, object[nextindex].name);

                cout <<"Enter  initial balance not less than 5000: ";

            
                while(!((cin>>object[nextindex].initialDeposit) && object[nextindex].initialDeposit >= 5000)){
                
                    cout <<"Initial deposit should not be less than 5000: ";
                    cin.clear();  cin.ignore();

                }
                Curr_Account acc(object[nextindex].name, object[nextindex].initialDeposit);

                string accnbr = "8005763968" + to_string(nextindex);
            
                acc.get_info(accnbr, "Current");

                object[nextindex].accountnbr = accnbr;
                object[nextindex].accounttype = "Current";
                nextindex++;
                acc.display();
            }

        
        }else{

            system("clear");

            string nbracc;
            cout <<"Enter your account number :";
            cin.ignore();
            getline(cin, nbracc);

            int accinfo = search(object, nbracc);
        

            if(accinfo != 0){

                if(object[accinfo].accounttype == "Saving"){

                    cout<<endl<<"1. Deposit"<<endl
                              <<"2. Check balance"<<endl
                              <<"3. Withdraw"<<endl
                              <<"4. quit"<<endl;
                    int activitychoice;

                    while(!((cin>>activitychoice) && (activitychoice > 0 && activitychoice < 5))){
                
                        cout <<"Enter a valid number choice: ";
                        cin.clear(); cin.ignore();

                    }

                    Sav_Account acc(object[accinfo].name, object[accinfo].initialDeposit, 
                                    object[accinfo].accountnbr, object[accinfo].accounttype);

                    if (activitychoice == 1){
                        acc.deposit();
                        object[accinfo].initialDeposit = acc.com_interest();

                        

                    }else if (activitychoice == 2) acc.display();
                    else if (activitychoice == 3) object[accinfo].initialDeposit=acc.withdraw();
                    //else continue;
                    


                }else{
                    system("clear");

                     cout<<endl<<"1. Deposit"<<endl
                              <<"2. Check balance"<<endl
                              <<"3. Cheque details"<<endl
                              <<"4. quit"<<endl;
                    int activitychoice;

                    while(!((cin>>activitychoice) && (activitychoice > 0 && activitychoice < 5))){
                
                        cout <<"Enter a valid number choice: ";
                        cin.clear(); cin.ignore();

                    }
                    Curr_Account acc(object[accinfo].name, object[accinfo].initialDeposit, 
                                     object[accinfo].accountnbr, object[accinfo].accounttype);

                    if (activitychoice == 1)
                        object[accinfo].initialDeposit = acc.deposit();
                    else if (activitychoice == 2)
                         acc.display();
                    else if (activitychoice == 3) 
                        object[accinfo].initialDeposit =  acc.chequetransaction();
                    //else continue;
                    

                }


            }else{

                cout <<"You have entered a wrong account number "<<endl;


            }
                
        }
    cin.clear(); cin.ignore();


    }
    cout<< "\nThis is it, am very sure and believe you can make it\n" << endl;
    return 0;
}


// constructor1 definition
Account :: Account(string name, float bal){
    accountowner = name;
    if(bal >= 5000){
        balance = bal;
        cout <<endl<< "Your account is successfully created:\n" << endl;
                
    }else
        cout <<"Hello " << name << " intial deposit must be greater than 5000"<<endl;

}

//constructor 2 definition
Account ::Account(string name, float bal, string acc_no, string acc_type ){
    accountowner = name;
    balance = bal;
    accountnumber = acc_no;
    account_type = acc_type;
}

// display function
void Account::display(){

    cout <<"Name: "<<accountowner << endl;
    cout <<"Account balance :"<< balance << endl;
    cout <<"Account Number :"<< accountnumber<< endl;
    
}

void Account :: get_info(string acc_no, string acc_type){

    accountnumber = acc_no;
    account_type = acc_type;
}

// compound interest for the saving account
float Sav_Account :: com_interest(){

    int interest = (0.1*balance);
    balance = balance + interest;
    cout <<"Amount shs:"<< interest << " has been added to your account as compound interest "<<endl;

    return balance;
}

// withdraw cash from the account
float Sav_Account :: withdraw(){

    float amount;
    cout << "Enter the amount you want to withdraw from your account: " ;

    while(!(cin>>amount)){
        cout <<"Enter valid amount of money: ";
        cin.clear();
        cin.ignore();
    }
    if(  amount < (balance-(min_bal_accept)) ){

        balance = balance-amount;
        cout << "Amount " << amount << " has been withdrawn from your account " << endl;

    }else if ( amount < (balance-2000)){
        balance = balance - (amount + 300);
        cout <<endl<< "Amount shs " << amount << "has been withdrawn from your account"<<endl
             << "And a penalty charge of "<< 300<<" for leaving less than  "<<min_bal_accept << " shillngs."<< endl;

    }else
        cout <<"You don't have enough funds to carry out this transaction" <<endl;

    return balance;
}


//search function

int search(struct getCustomerInfo customer[], string acc_nbr){
    for(int i= 1;i<=100; i++){
    
        int accsearch = acc_nbr.compare(customer[i].accountnbr);
        
        if(accsearch == 0)
            return i;
        else 
            return 0;
    }
    
}

float  Account :: deposit(){

    float amount;
    cout << "Enter the amount you want to deposit to your account: " ;
    while(!(cin>>amount) ){
        
        cout <<"Enter valid money :"<<endl;
        cin.clear(); cin.ignore();

    }

    balance +=amount;
    cout<<endl<<accountowner<<"You have deposited shs "<<amount <<endl
        <<"Now your balance is "<<balance <<endl;

    return balance;
}

float Curr_Account ::chequetransaction(){

    string payee, date;
    float amount;

    cout <<endl<<"Enter the date on the cheque: ";
    cin.ignore(); getline(cin, date);

    cout<<endl<<"The the payee :";
    cin.ignore(); getline(cin, payee);

    cout <<endl<<endl<<"Enter the amount to be paid: ";
    while(!(cin>>amount)){ 
        cout <<"Enter the valid amount to be paid: ";
        cin.clear(); cin.ignore();
    }
    if(amount < (balance-(min_bal_accept))){

        balance = balance-amount;
        cout << "Amount " << amount << " has been paid to "<<payee << endl
             <<"And your balance is shs "<<balance<<endl;
    }else if ( amount < (balance-2000)){
        balance = balance - (amount + 300);
        cout << "Amount " << amount << "has been paid "<<endl
             << "And a penalty charge of "<< 300<<" for leaving less than  "<<min_bal_accept << " shillngs."<< endl;

    }else
        cout <<"You don't have enough funds to carry out this transaction" <<endl;

    return balance;
}