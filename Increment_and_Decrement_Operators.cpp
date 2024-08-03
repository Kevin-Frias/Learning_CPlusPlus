// Section 8
/*
 * Increment operator ++
 * Decrement operator --
 *
 * Increments or decrement its operand by 1
 * Can be used with integers, floating point types and pointers
 *
 * Prefix ++num
 * Postfix num++
 *
 * Don't overuse this operator!
 * ALERT!! Never use it twice for the same variable in the same statement!!
 */
#include <iostream>

using namespace std;

int main() {

    int counter {10};
    int result {0};

//Exmaple 1 - simple increment
    cout << "Counter: " << counter << endl;

    counter = counter + 1;
    cout << "Counter: " << counter << endl;
    //Not done yet.....
}