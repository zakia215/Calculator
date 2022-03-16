#include <iostream>
#include <cmath>

using namespace std;

double add(double num1, double num2) {
    return num1 + num2;
}

double subs(double num1, double num2) {
    return num1 - num2;
}

int main() {
    double a, b;
    char op;
    cout << "Please put in a number: ";
    cin >> a;
    cout << "Please put in an operator (+, -, /, *, ^)";
    cin >> op;
    cout << "Please put in another number: ";
    cin >> b;
    return 0;
}