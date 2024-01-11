#include <iostream>

using namespace std;

//function prototype
void greet(string name, string family);

int main() {
    greet("Alireza", "Tavana");
    return 0;
}

//function definitaion
void greet(string name,string family) {
    cout << "Hello" << name << " " << family;
}