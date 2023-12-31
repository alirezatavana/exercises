#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string names [3];
    cout << "name :";
    getline(cin, names [0]);
    cout << "name :";
    getline(cin, names [1]);
    cout << "name :";
    getline(cin, names [2]);
    cout << names[0];

    return 0;
}