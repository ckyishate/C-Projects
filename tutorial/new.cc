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
            cout <<"successfull transactions "<<success<<endl<<endl;
            cout <<"Failed  transactions "<<nosuccess<<endl<<endl;
        }
        
};


int main(){

    book *b; 
    b = new book[]={b("Harvest Money", "New Vision", "Agrey", 7800, 23),
              b("How to succedd", "abel", "ssentamu", 500, 45), 
              b("Debate", "yusuf", "Gibedi", 500, 90), 
              b("Accomplished", "Grace", "messi", 500, 12),
              b("love is easy","Adam","Gideon",200,6),
              b("Accomplished", "Grace", "messi", 500, 3),};




delete [] b;

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

