#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b){
    return a - b;
}

double multiply(double a, double b){
    return a * b;
}

double divide(double a, double b){
    if (b != 0) return a / b;
    else {
        cout << "Error: dividing by zero!" << endl;
        return 0;
    }
}

int main() {
    double(*operations[])(double, double) = { add, subtract, multiply, divide };

    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Sum: " << operations[0](num1, num2) << endl;
    cout << "Diffrence: " << operations[1](num1, num2) << endl;
    cout << "Product: " << operations[2](num1, num2) << endl;
    cout << "Quotient: " << operations[3](num1, num2) << endl;

    return 0;
    
}
