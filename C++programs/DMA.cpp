#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many elements? ";
    cin >> n;

    int *arr = new int[n];   
    for (int i = 0; i < n; i++) {
        arr[i] = i * 10;
    }

    cout << "Array contents: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;              
    arr = nullptr;

    return 0;
}