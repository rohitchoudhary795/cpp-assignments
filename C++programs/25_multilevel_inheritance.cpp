#include <iostream>
using namespace std;

class Grandfather {
public:
    void showGrandfather() {
        cout << "Grandfather: Owns land." << endl;
    }
};

class Father : public Grandfather {
public:
    void showFather() {
        cout << "Father: Runs a business." << endl;
    }
};

class Son : public Father {
public:
    void showSon() {
        cout << "Son: Studies engineering." << endl;
    }
};

int main() {
    Son s;
    s.showGrandfather();   
    s.showFather();        
    s.showSon();          

    return 0;
}