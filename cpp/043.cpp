#include <iostream>

using namespace std;

int main() {
    cout << "Enter a positive integer number : ";
    int number;
    cin >> number;
    if (number < 0) {
        cout << "Error! Enter a positive number";
    }
    else {
        int factorial = 1;
        for(int i = 1; i <= number; i++){
            factorial *= i;  // factorial = factorial * i
        }
        cout << "The factorail of the " << number << " : " << factorial;
    }
    return 0;
}