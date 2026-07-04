#include <iostream>
using namespace std;

class Fibonacci {
    int n;                    
    void generate(int f0, int f1, int count) {
        if (count >= n) return;
        cout << f0 << " ";
        generate(f1, f0 + f1, count + 1);
    }

public:
    void setRange(int range) {   
        n = range;                                          
    }
    void display() {              
        generate(0, 1, 0);
        cout << endl;
    }
};

int main() {
    Fibonacci obj;
    obj.setRange(5);
    obj.display();
    return 0;
}