// Video 66 //Section 8

#include <iostream>

using namespace std;

int main() {
    const double usd_per_eur {1.19};

    cout << "Welcome to hte EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";

    double euros {0.0};
    double dollars {0.0};

    cin >> euros;
    dollars = euros * usd_per_eur;

    cout << euros << " euros is equivalent to " << dollars << " dollars." << endl;

}