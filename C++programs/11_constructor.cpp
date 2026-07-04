#include <iostream>
using namespace std;

class Student {
    int id;

public:
    Student() {
        id = 0;
        cout << "Default Constructor Called" << endl;
    }
    Student(int x) {
        id = x;
        cout << "Parameterized Constructor Called" << endl;
    }
    Student(const Student &obj) {
        id = obj.id;
        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "ID = " << id << endl;
    }
    ~Student() {
        cout << "Destructor Called for ID = " << id << endl;
    }
};

int main() {
    Student s1;
    s1.display();
    cout << endl;
    Student s2(101);
    s2.display();
    cout << endl;
    Student s3(s2);
    s3.display();
      return 0;
}