#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(const vector<int>& v) {
    for (int x : v) cout << x << " ";
    cout << "\n";
}

int main() {
    vector<int> v = {12,43,56,78,97};

    cout << "Original: ";
    printVector(v);

    v.push_back(60);             
    v.insert(v.begin(), 5);       
    cout << "After insertions: ";
    printVector(v);

    v.erase(v.begin() + 2);      
    cout << "After deletion: ";
    printVector(v);

    sort(v.begin(), v.end());    
    cout << "Sorted: ";
    printVector(v);

    return 0;
}