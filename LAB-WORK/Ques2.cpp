#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    // Constructor
    Calculator(double n1, double n2) : num1(n1), num2(n2) {}

    // Addition method
    double add() const {
        return num1 + num2;
    }

    // Subtraction method
    double subtract() const {
        return num1 - num2;
    }

    // Multiplication method
    double multiply() const {
        return num1 * num2;
    }

    // Division method
    double divide() const {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Cannot divide by zero" << endl;
            return 0;
        }
    }
};

int main() {
    // Example usage
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    Calculator calculator(num1, num2);

    cout << "Sum: " << calculator.add() << endl;
    cout << "Difference: " << calculator.subtract() << endl;
    cout << "Product: " << calculator.multiply() << endl;
    cout << "Quotient: " << calculator.divide() << endl;

    return 0;
}

