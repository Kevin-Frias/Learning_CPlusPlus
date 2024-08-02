//Video 65, Section 8
#include <iostream>

using namespace std;

/*
 * 1hs = rhs;
 *
 * num1 {10}
 * num1 = 100;
 * storing 100 to num1.
 *
 * l-value(location) and r-value(context)
 *
 * L <------- R
 *
 * num1 = num2 = 1000;
 *
 */


int main() {
    int num1 {10}; //This is initialization
    int num2 {20};

    num1 = 100; // This is assignment
    //could say num1 = num2;

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    cout << endl;

    return 0;
}
