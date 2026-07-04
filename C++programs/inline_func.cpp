#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    // inline by default — defined inside the class
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r;
    r.setDimensions(5, 3);
    cout << "Area: " << r.area() << endl;
    return 0;
}