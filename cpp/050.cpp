#include <iostream>

using namespace std;

int main() {
    cout << "Rows : ";
    int rows;
    cin >> rows;
    for (int j = 1; j <= rows; j++) {
        for (int i = 0; i < j; i++){
            cout << "*";
        }
    cout << endl;  
    }
    return 0;
}