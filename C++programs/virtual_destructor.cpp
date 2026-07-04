#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor" << endl;
    }
    virtual ~Base() {              \
        cout << "Base destructor" << endl;
    }
};

class Derived : public Base {
    int *data;
public:
    Derived() {
        data = new int[100];
        cout << "Derived constructor (allocated memory)" << endl;
    }
    ~Derived() override {
        delete[] data;
        cout << "Derived destructor (freed memory)" << endl;
    }
};

int main() {
    Base *b = new Derived();

    delete b;

    return 0;
}