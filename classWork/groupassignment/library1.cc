#include<iostream>
#include<string>
using namespace std;

class book{

    private:
        string title;
        string author;
        float price;
        string publisher;
        int stockPosition;
        void updatePrice(int newprice);

    public:
        book(string t, string auth,  string pubr, float p, int nbr);
        int search(string t, string a);
        void transact(int num);
        void get_update();
        void display();

        static int success, nosuccess;
        static void display_static(){
            cout <<endl<<"successfull transactions "<<success<<endl;
            cout <<"Failed  transactions "<<nosuccess<<endl<<endl;
        }
        
};



// main function
int main(){

    
    char reply;
   
    book b[]={book("Harvest Money", "New Vision", "Agrey", 7800, 23),
              book("How to succedd", "abel", "ssentamu", 500, 45), 
              book("Debate", "yusuf", "Gibedi", 500, 90), 
              book("Accomplished", "Grace", "messi", 500, 12),
              book("love is easy","Adam","Gideon",200,6),
              book("Accomplished", "Grace", "messi", 500, 3)};
    
    system("clear");

    cout <<"........................Library Selling System....................................."<<endl<<endl;

    while(1){

        cout <<endl<<"Press  'y'  to continue" << endl << "Any other key to stop:  ";
        cin.get(reply);
    

        reply = tolower(reply);

        if(reply != 'y'){

            cout <<"Thanks for using the system "<<endl<<endl;
            break;
        }

        system("clear");
        string ttle, athr;
        cout << "Enter the  title of the book:  ";
        cin.ignore();
        getline(cin, ttle); 
        cout  << "Enter the author of the book:  ";
    
        getline(cin, athr); 



        int search_resultIndex = 0;

        while(!(b[search_resultIndex].search(ttle,athr))){

            search_resultIndex++;
            if(search_resultIndex == 6){
                cout <<endl<<"The book your searched for is not available in stock " << endl<<endl;
                break;
            }
        }  
        
    
        if (search_resultIndex != 6){

            b[search_resultIndex].display();


            cout <<"Select one option "<<endl
                 <<"1. Transaction"<<endl
                 <<"2. Change Price "<<endl
                 <<"3. Transactions Report "<<endl<<"Choice: ";

            int choice;
        
            while(!((cin>>choice) && (choice ==1 || choice == 2 || choice == 3))){

                cout<<"Enter 1 or 2 or 3"<< endl;
                cin.clear();
                cin.ignore();
            
            }

            if(choice == 1){

                cout <<endl<<"How many books do you want:  ";

                int booknumber;

                while(!(cin>>booknumber)){cout <<"Enter a digit: "; cin.clear(); cin.ignore(); }  

                b[search_resultIndex].transact(booknumber);           


            }else if (choice == 2){

                b[search_resultIndex].get_update();
                b[search_resultIndex].display();

            }else{

                book::display_static();
            }


        }

        cin.clear();
        cin.ignore();
    }

    return 0;
}


// constructor definition

book :: book(string t, string auth,  string pubr, float p, int nbr){

    title =t;
    author = auth;
    publisher = pubr;
    price =p;
    stockPosition = nbr;

}

// search  function definition
int book :: search(string t, string a){

    int title_search = t.compare(title);
    int author_search = a.compare(author);

    if (title_search == 0 && author_search == 0)
        return 1;
    else
        return 0;
}

// transaction function definition
void book :: transact(int num){

    if(num <= stockPosition){

        stockPosition -=num;
        int totalcost = price*num;
        cout <<"The books cost Shs: "<<totalcost<<endl<<endl;
        cout <<"Transaction successfull"<<endl<<endl;
        success++;
        
    }else{
        cout<<"Required number not in stock " <<endl;
        nosuccess++;
    }
}


// updating the price of a book
void book :: get_update(){

    cout << "Enter the new price "<<endl;
    
    while(!(cin>>price)){
        cout <<"This must be currency: ";
        cin.clear();
        cin.ignore();
    }
    updatePrice(price);
    
}


// update price function definition
void book :: updatePrice(int newPrice){

    price = newPrice;
}

void book::display(){

    cout <<endl<< "Author:  " << author << endl;
    cout << "Title:   " << title << endl;
    cout << "Publisher: " << publisher << endl;
    cout << "Price:   " << price << endl<<endl;
           
}
int book :: success =0;
int book :: nosuccess =0;