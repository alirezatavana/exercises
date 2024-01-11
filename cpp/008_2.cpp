#include <iostream>

using namespace std;

int main() {
    int first[] = {10, 20, 30};
    int second[] = {10, 20, 30};
    bool isequal = true;
    for (int i = 0; i < size(first); i++) {
        if (first[i] != second[i]){
            isequal = false;
            break;
        }
    }
    cout << boolalpha << isequal;
}