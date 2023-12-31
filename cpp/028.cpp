#include <iostream>
#include <iomanip>

using namespace std;

int main() {
cout << left << setw(15) << "Course" << setw(10) << "Students" << endl
     << setw(15) << "C++" << setw(10) << right << "100" << endl;
cout << left;
cout << "Javascript" << setw(10) << right << "50" << endl;
return 0;
}