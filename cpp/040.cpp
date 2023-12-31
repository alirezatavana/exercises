#include <iostream>

using namespace std;

int main() {
    bool iscitizen = true;
    bool caresident = true;
    short tution = 0;
    if (iscitizen) {
        if (caresident) tution = 0;
        else tution = 1000;
    }
    else tution = 3000;
    return 0;
    }
