#include <iostream>

using namespace std;

int main() {
    cout << "Enter the first number : ";
    double first_number;
    cin >> first_number;
    cout << "Enter the second number : ";
    double second_number;
    cin >> second_number;
    cout << "selet the operator : ";
    char op;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << first_number + second_number;
        break;
    case '-':
        cout << first_number - second_number;
        break;
    case '*':
        cout << first_number * second_number;
        break;    
    case '/':
        cout << first_number / second_number;
        break;
    }
}