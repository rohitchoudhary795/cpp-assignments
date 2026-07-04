#include <iostream>
using namespace std;

class Box {
    int length;
public:
    void setLength(int length) {
        this->length = length;   
    }
    void display() {
        cout << "Length: " << this->length << endl;
    }
};

int main() {
    Box b;
    b.setLength(15);
    b.display();
    return 0;
}