#include <iostream>

using namespace std;

/* int main() {
    int numbers[] = {10, 20, 30};
    for(int number : numbers) {
        cout << number <<endl;

    }
}
*/

int main() {
    int numbers[] = {10, 20, 30};
    for(int i = 0; i < size(numbers); i++){
        cout << numbers[i] << endl;
    }
    return 0;
}