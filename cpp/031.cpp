#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Street :" << endl;
    string street;
    getline(cin, street);


    cout << "City :" << endl;
    string city;
    getline(cin, city);


    cout << "State :" << endl;
    string state;
    getline(cin, state);


    cout << "ZipCode :" << endl;
    string zipcode;
    getline(cin, zipcode);
    cout << endl;

    cout << street << endl
         << city << "," << state << "," << zipcode;
    return 0;
}