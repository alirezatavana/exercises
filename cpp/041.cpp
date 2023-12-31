#include <iostream>

using namespace std;

int main() {
    int sales = 11000;
    double commission;
    if (sales <= 10000) {
        commission = 0.1;
        }

    else if (sales > 10000 && sales <= 15000){
            commission = 0.15;
        }
    else {
        commission = 0.2;
    }    
cout << commission;        
return 0;
}
