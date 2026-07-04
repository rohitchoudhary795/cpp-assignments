#include <iostream>
using namespace std;

class Theory {
protected:
    int theoryMarks;
public:
    void setTheory(int t)
     {
         theoryMarks = t;
     }
};

class Practical {
protected:
    int practicalMarks;
public:
    void setPractical(int p) 
    {
         practicalMarks = p;
         }
};

class Result : public Theory, public Practical {
public:
    void showResult() {
        cout << "Theory: " << theoryMarks << endl;
        cout << "Practical: " << practicalMarks << endl;
        cout << "Total: " << (theoryMarks + practicalMarks) << endl;
    }
};

int main() {
    Result r;
    r.setTheory(80);       
    r.setPractical(45);   
    r.showResult();      

    return 0;
}