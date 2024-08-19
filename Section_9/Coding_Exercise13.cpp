/*
    In this exercise you will write a switch  statement that
    displays the name of the day of the week given the day code.

    You may use the integer variable named day_code
    whose value we will change to automatically to test your code.
    You do NOT need to declare this variable.

    Given the following day codes, your program should display
    the day of the week using a cout  statement.
 */

#include <iostream>

using namespace std;

int main(){

    int day_code {};

    //Asking user for day code.
    cout << "Enter the day code: ";
    cin >> day_code;

    switch(day_code){
        case 0: cout << "Sunday";
            break;

        case 1: cout << "Monday";
            break;

        case 2: cout << "Tuesday";
            break;

        case 3: cout << "Wednesday";
            break;

        case 4: cout << "Thursday";
            break;

        case 5: cout << "Friday";
            break;

        case 6: cout << "Saturday";
            break;

        default:
            cout << "Error - illegal day code";
            break;
    }

}