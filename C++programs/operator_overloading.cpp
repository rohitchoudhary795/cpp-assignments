#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex const &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    Complex operator-(Complex const &obj) {
        return Complex(real - obj.real, imag - obj.imag);
    }

    bool operator==(Complex const &obj) {
        return (real == obj.real && imag == obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(4, 5);
    Complex c2(1, 2);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    sum.display();
    diff.display();

    if (c1 == c2)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;

    return 0;
}