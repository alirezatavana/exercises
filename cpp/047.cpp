#include <iostream> 

using namespace std;

int main() {
    int secret_number = 10;
    int guess_number = 0;
    cout << "Enter your number : ";
    while (guess_number != secret_number) {
        cin >> guess_number;
        cout << "Try another number : ";
    }
return 0;
}