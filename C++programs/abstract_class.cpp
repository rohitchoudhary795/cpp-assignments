#include <iostream>
using namespace std;
class Shape {              
public:
    virtual double area() = 0;      
    virtual void display() = 0;     
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) { radius = r; }

    double area() override {
        return 3.1416 * radius * radius;
    }
    void display() override {
        cout << "Circle (radius " << radius << ") -> Area: " << area() << endl;
    }
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) { length = l; width = w; }

    double area() override {
        return length * width;
    }
    void display() override {
        cout << "Rectangle (" << length << " x " << width << ") -> Area: " << area() << endl;
    }
};
int main() {
    // Shape s;              // ERROR if uncommented — cannot instantiate abstract class
    Shape *shapes[2];      
    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);
    for (int i = 0; i < 2; i++) {
        shapes[i]->display();     
    }
    for (int i = 0; i < 2; i++) {
        delete shapes[i];
    }
    return 0;
}