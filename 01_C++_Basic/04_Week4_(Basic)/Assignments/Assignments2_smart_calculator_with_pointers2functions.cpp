#include <iostream>

using namespace std;
// Function prototypes each one take two arguments and return a double
/*1.Add return Summation
  2.Subtract 
  3. Muliplication 2 numbers
  4. Division 2 Numbers */
double Add(double a, double b);
double Subtract(double a, double b);
double Multiply(double a, double b);
double Divide(double a, double b);

void Calculate(double* a, double* b, char operation) {
    typedef double (*Function)(double, double); // Fixed function pointer syntax
    Function func = nullptr;
    double result;
    switch (operation) {
        case '+':
            func = Add;
            break;
        case '-':
            func = Subtract;
            break;
        case '*':
            func = Multiply;
            break;
        case '/':
            func = Divide;
            break;
        default:
            cout << "Invalid operator" << endl;
            return;
            
    }
    result = func(*a, *b);
    cout << "Result: " << result << endl;
}

int main() {
    double a, b;
    char operation;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter an operator (+, -, *, /): "<<endl<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl;
    cin >> operation;

    Calculate(&a, &b, operation);

    return 0;
}
// Function implementations (now using values)
double Add(double a, double b) {
    return a + b;
}

double Subtract(double a, double b) {
    return a - b;
}

double Multiply(double a, double b) {
    return a * b;
}

double Divide(double a, double b) {
    return a / b;
}

