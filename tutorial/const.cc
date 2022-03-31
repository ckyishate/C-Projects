// CLASSES AND OBJECTS
#include<iostream>
#include<string>
using namespace std;

class Cars{
    private:
        // data members
        string company_name;
        string model_name;
        string fuel_type;
        float mileage;
        double price;

    public:
        Cars(){
            cout << ".....Default constructor......" << endl;
            
        }
        Cars(string cname, string mname, string ftype, float m, double p){

            cout << "Parameterized constructor called " << endl;
            company_name = cname;
            model_name = mname;
            fuel_type = ftype;
            mileage = m;
            price = p;
        }

        Cars(Cars  &obj){
            cout << "......Copy constructor call....."<< endl;

            company_name = obj.company_name;
            model_name = obj.model_name;
            fuel_type = obj.fuel_type;
            mileage = obj.mileage;
            price = obj.price;

        
        }
        // member function
        void setData(string cname, string mname, string ftype, float m, double p){
            company_name = cname;
            model_name = mname;
            fuel_type = ftype;
            mileage = m;
            price = p;
        }
        void displayData(){
            cout << "Car Properties"<< endl;
            cout << "Car Company Name:" << company_name << endl;
            cout << "Car Company label: " << model_name  << endl;
            cout << "Car  Fuel Type - " << fuel_type << endl;
            cout << "Car Mileage - " << mileage << endl;
            cout << "Car Price - " << price << endl << endl;

        }
        ~Cars()
        {
            cout << "Destructor called " << endl;
        }
};

int main(){
    Cars car1, car2("Toyota","Fortuner", "Diesel", 15.5, 150000), car3;
    car1.setData("Toyota","altis", "petrol", 15.5, 160000);
    car1.displayData();
    car2.displayData();
    car3 = car1;
    car3.displayData();
    
    return 0;
}

