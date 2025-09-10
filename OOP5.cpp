#include<iostream>
using namespace std;

class Shape {
protected:
    int x, y; 

public:
    void get_data() {
        cout << "Enter the value of L1 : ";
        cin >> x;
        cout << "Enter the value of L2 : ";
        cin >> y;
    }

    virtual void display_area() = 0; //  pure virtual function
};

class Triangle : public Shape {
public:
    virtual void display_area() { 
        float area = 0.5 * x * y;
        cout << "Area of the Triangle: " << area << endl;
    }
};

class Rectangle : public Shape {
public:
    virtual void display_area() { 

        float area = x * y;
        cout << "Area of the Rectangle: " << area << endl;
    }
};

int main() {
    Shape* ptr;
    Triangle t; 
    Rectangle r;

    //  for Triangle
    ptr = &t;
    ptr->get_data();  
    ptr->display_area();  //  area of the Triangle

    //  for Rectangle
    ptr = &r;
    ptr->get_data();  
    ptr->display_area();  //area of the Rectangle

    return 0;
}
