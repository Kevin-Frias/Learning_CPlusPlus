/*
 * In this exercise you will use a simple "if" statement to decide if someone can drive.
 * Let's assume that anyone 16 or older can legally drive.
 *
 * If the person can legally drive, your program should display, "Yes - you can drive"
 */
#include <iostream>
using namespace std;

int main(){
    int user_age{};
    const int minimal_age_to_drive{16};

    //Asking user for age
    cout << "Tell me your age to know, if you can drive?" << endl;
    cout << ": ";
    cin >> user_age;

    if (user_age >= 16){
        cout << "Yes - you can drive!" << endl;
    }

    if( user_age < minimal_age_to_drive){
        cout << "No - you can't drive!" << endl;
    }

    cout << endl;
    return 0;
}