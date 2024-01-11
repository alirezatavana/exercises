#include <iostream>

using namespace std;

int maximum (int number_one, int number_two) {
    return(number_one > number_two) ? number_one : number_two;
}

int main() {
    int large = maximum(1,10);
    cout << large;
    return 0;
}