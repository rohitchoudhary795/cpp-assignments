#include <iostream>
using namespace std;

class Student {
    int rollNo;
public:
    static int count;  

    Student() {
        count++;        
        rollNo = count;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
    }

    static void showCount() {         
        cout << "Total students: " << count << endl;
    }
};

int Student::count = 0;   
int main() {
    Student s1, s2, s3;

    s1.display();
    s2.display();
    s3.display();

    Student::showCount();   // called using class name, no object needed
    return 0;
}