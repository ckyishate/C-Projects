#include<iostream>

using namespace std;

class Rectangle
{
    int width, height;
    public:
        void setvalues(int a, int b);
        int area(){
            return width*height;
        }

};


void Rectangle :: setvalues(int x, int y){
    width = x;
    height = y;
}

int main()
{
    Rectangle rect;
    rect.setvalues(3,4);

    cout << "Area: "<<rect.area()<<endl;

    return 0;
}