#include<iostream>
using namespace std;

struct  smartPhone{
    string name;
    int storageSpace;
    string color;
    float price;
};


struct Person{
    string name;
    int age;
    smartPhone smartphone;

};

void smartphoneInfo(smartPhone smartphone){

    cout << "Smart phone name  :"<< smartphone.name<<endl;
    cout << "Phone storage :"<<smartphone.storageSpace << endl;
    cout << "color: " << smartphone.color << endl;
    cout << "Price: " << smartphone.price << endl<<endl;

}

void printpersonInfo(Person person){
    cout << "Name : "<<person.name << endl;
    cout << "Age : " << person.age << endl;
    smartphoneInfo(person.smartphone);

}

int main(){

    smartPhone smartphone;
    smartphone.name = "Iphone Pro";
    smartphone.storageSpace = 126;
    smartphone.color = "green";
    smartphone.price = 7000;

    smartPhone smartphone1;
    smartphone1.name = "galaxy Pro";
    smartphone1.storageSpace = 26;
    smartphone1.color = "blue";
    smartphone1.price = 500;

    Person p;
    p.name = "Yusuf";
    p.age = 45;
    p.smartphone = smartphone1;

//    smartphoneInfo(smartphone);
//    smartphoneInfo(smartphone1);

    printpersonInfo(p);
    


    system("pause>0");
}