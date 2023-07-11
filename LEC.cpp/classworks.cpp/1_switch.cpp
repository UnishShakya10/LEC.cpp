#include <iostream>
using namespace std;

int main() {
    char oper;
    float a , b;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    switch (oper) {
        case '+':
            cout << a << " + " << b << " = " << a + b;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b;
            break;
        case '/':
            cout << a << " / " << b << " = " << a / b;
            break;
        default:
           
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}