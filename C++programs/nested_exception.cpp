#include <iostream>
#include <stdexcept>
using namespace std;

double process(int index, double a, double b) {
    if (index < 0)
        throw out_of_range("Index cannot be negative!");
    if (b == 0)
        throw invalid_argument("Division by zero!");
    if (a < 0)
        throw logic_error("Negative numerator not allowed!");
    return a / b;
}

int main() {
    try {
        cout << process(-1, 10, 2) << "\n";
    }
    catch (const out_of_range& e) {
        cerr << "Out of range error: " << e.what() << "\n";
    }
    catch (const invalid_argument& e) {
        cerr << "Invalid argument error: " << e.what() << "\n";
    }
    catch (const logic_error& e) {
        cerr << "Logic error: " << e.what() << "\n";
    }
    catch (const exception& e) {
        // fallback for anything else derived from std::exception
        cerr << "General exception: " << e.what() << "\n";
    }
    catch (...) {
        // fallback for absolutely anything (non-standard exceptions too)
        cerr << "Unknown exception occurred!\n";
    }

    return 0;
}