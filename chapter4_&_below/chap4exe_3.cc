#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main(){

    int articleNumber, nbrOfPieces, Price;

    cout << "\nEnter the Article Number: ";
    cin >> articleNumber;
    cout << "\nEnter the number of pieces: ";
    cin >> nbrOfPieces;
    cout << "\nEnter the price for each Item: ";
    cin  >> Price;


    cout << "Article Number\t Number of Pieces \t Price per piece \n"
         << "\t" << articleNumber << "\t\t" <<nbrOfPieces<< "\t\t\t" << Price<< " Dollar " <<endl;

    return 0;
}