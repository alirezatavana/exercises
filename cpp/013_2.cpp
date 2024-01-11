#include <iostream>

using namespace std;

void swap(int numbers[], int i, int j) {
    int temporary = numbers[i];
    numbers[i] = numbers [j];
    numbers[j] = temporary;
}

void bubble_sort (int numbers[],int size) {
    for (int pass = 0; pass < size; pass++){
        for (int i = 1; i < size; i++){
            if (numbers[i] < numbers[i-1]){
                swap(numbers, i, i-1);
            }
        }
    }
}

int main() {
    int numbers[] = {30, 20, 10};
    bubble_sort(numbers, size(numbers));
    for (int number: numbers){
        cout << bubble_sort;
    }
    return 0;
}