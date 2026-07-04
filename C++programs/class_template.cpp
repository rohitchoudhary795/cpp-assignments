#include <iostream>
using namespace std;

template <class T>
class Box {
    T value;
public:
    void set(T v) {
        value = v;
    }
    T get() {
        return value;
    }
};

int main() {
    Box<int> intBox;
    intBox.set(25);
    cout << "Int Box: " << intBox.get() << endl;

    Box<double> doubleBox;
    doubleBox.set(3.14);
    cout << "Double Box: " << doubleBox.get() << endl;

    Box<string> stringBox;
    stringBox.set("Hello");
    cout << "String Box: " << stringBox.get() << endl;

    return 0;
}