#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero!");
    }
    return numerator / denominator;
}

int main() {
    double a, b;
    cout << "Enter numerator: ";
    cin >> a;
    cout << "Enter denominator: ";
    cin >> b;

    try {
        double result = divide(a, b);
        cout << "Result: " << result << "\n";
    }
    catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << "\n";
    }

    cout << "Program continues after the try-catch.\n";
    return 0;
}