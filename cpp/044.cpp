#include <iostream>

using namespace std;

int main() {
    cout << "Enter temperatures :";
    int temperatures[] = {30, 20, 6};
    double sum = 0;
    for (int temp: temperatures){
        sum = sum + temp;
    }
    double average = sum / (sizeof(temperatures) / sizeof(int));
    cout << average;
    return 0;
}