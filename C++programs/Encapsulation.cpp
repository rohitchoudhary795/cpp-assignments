#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    float marks;

public:
    void setData(int r, float m) {
        rollNo = r;
        marks = m;
    }

    void getData() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    s.setData(101, 92);
    s.getData();

    return 0;
}