#include <iostream>

using namespace std;

int main() {
    double sales = 95000;
    cout << "Sales: $" << sales << endl;

    const double stat_tax_rate = 0.04;
    double statetax = sales * stat_tax_rate;
    cout << "State Tax : $" << statetax << endl;

    const double county_tax_rate = 0.02;
    double countytax = sales * county_tax_rate;
    cout << "Count Tax : $" << countytax << endl;

    double totaltax = statetax + countytax;
    cout << "Total Tax : $" << totaltax << endl;

}