#include <iostream>

using namespace std;

int main() {
    bool iscitizen = true;
    bool hasbeachelordegree = false;
    short yearsofexperience = 3;
    bool iseligible = iscitizen && (hasbeachelordegree || yearsofexperience >= 2);
    cout << boolalpha << iseligible;
    return 0;
}
