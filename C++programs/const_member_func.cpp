#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }
    void display() const {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
    int getMarks() const {
        return marks;
    }
    void updateMarks(int m) {
        marks = m;
    }
};

int main() {
    Student s1("Ali", 85);
    s1.display();
    s1.updateMarks(90);   
    s1.display();

    const Student s2("Sara", 70);
    s2.display();             
    cout << s2.getMarks() << endl;   
    return 0;
}