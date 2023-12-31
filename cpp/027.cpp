/*
#include <iostream>
// To generate random number use the below library
#include <cstdlib>

using namespace std;

int main() {
   long elapsedsecond = time(nullptr);
   srand(elapsedsecond);
   int number = rand();
   cout << number;
    return 0;
}
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    cout << "Roll a Dice every time you run this program" << endl;
    srand(time(0));
    const int maxvalue = 6;
    const int minvalue = 1;
    int number1 = (rand () % (maxvalue - minvalue +1)) + minvalue;
    int number2 = (rand () % (maxvalue - minvalue +1)) + minvalue;
    cout << number1 << "," << number2;
    return 0;
}