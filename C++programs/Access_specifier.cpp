#include <iostream>
using namespace std;

class Student {
private:
    int marks = 90;

protected:
    int rollNo = 101;

public:
    string name = "rohit";

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

class Result : public Student {
public:
    void show() {
        cout << "Roll No (Protected): " << rollNo << endl;
    }
};

int main() {
    Result r;

    cout << "Name: " << r.name << endl;   
    r.show();                             
    r.display();                          

    return 0;
}