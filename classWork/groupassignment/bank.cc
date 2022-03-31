#include<iostream>
#include<string>
using namespace std;

// function definition

//the account class

class Account{
    string accountowner;
    string accountnumber;
    string account_type;
    protected:
        float balance;
        float min_bal_accept;

    public:
        Account(string name, float bal);
        void deposit();
        void withdraw();
        void display();
        void get_info(string acc_no, string acc_type);
};


class Curr_Account : public Account{

    public:
        Curr_Account(string name, float bal) : Account(name, bal){min_bal_accept = 3000;};
    
};



class Sav_Account : public Account{

    public:
        Sav_Account(string name, float bal) : Account(name, bal){min_bal_accept = 4500;};
        void com_interest();
        

        
        
};





// structures
struct getCustomerInfo{
    string name;
    float initialDeposit;
};





//****************MAIN FUNCTION********************************
int main()
{
    getCustomerInfo object;
    cout << "Enter your full name: ";
    getline(cin, object.name);
    cout <<"Enter the initial balance for your account: ";
    cin>>(object.initialDeposit);

    Sav_Account acc(object.name, object.initialDeposit);
    acc.get_info("34567892", "Current account");
    acc.display();
    acc.withdraw();
    acc.display();





    cout<< "\nThis is it, am very sure and believe you can make it\n" << endl;
    return 0;
}



// constructor definition
Account :: Account(string name, float bal){

    

    accountowner = name;

    
    if(bal >= 5000){
        balance = bal;
        cout << "Okay thanks. Your account is successfully created:\n" << endl;
    }else
        cout <<"Hello " << name << " intial deposit must be greater than 5000"<<endl;

}

// display function
void Account::display(){


    cout << accountowner << endl;
    cout << balance << endl;
    cout << accountnumber << endl;
    cout << account_type << endl<<endl;
}



void Account :: get_info(string acc_no, string acc_type){

    accountnumber = acc_no;
    account_type = acc_type;
}

// compound interest for the saving account
void Sav_Account :: com_interest(){

    int interest = (0.1*balance);
    balance = balance + interest;
    cout <<"Amount shs:"<< interest << " has been added to your account as compound interest "<<endl;
}

// withdraw cash from the account
void Account :: withdraw(){

    float amount;
    cout << "Enter the amount you want to withdraw from your account" << endl;
    if((cin>>amount) && amount < (balance-(min_bal_accept)) ){

        balance = balance-amount;
        cout << "Amount " << amount << " has been withdrawn from your account " << endl;

    }else if ( amount < (balance-2000)){
        balance = balance - (amount + 300);
        cout << "Amount " << amount << "has been withdrawn from your account"<<endl
             << "And a penalty charge of "<< 300<<" for leaving less than  "<<min_bal_accept << " shillngs."<< endl;

    }else
        cout <<"You don't have enough funds to carry out this transaction" <<endl;
}




