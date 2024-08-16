/*
 * In this exercise you will use nested if statements to decide if someone can drive.
 * Let's assume taht anyone 16 or older can legally, drive, but they must also own a car to drive.
 *
 * If the person is not 16 or older then you should display, "Sorry, come back in n years and be
 * sure you own a car when you come back.", where n is how many years until the person turns 16
 * years old.
 *
 * if the person is 16 or older but they do NOT own a car, then your program should display, "Sorry,
 * you need to buy a car before you can drive!".
 *
 * if the person is 16 or oler and they DO own a car, then your program should display, "Yes - you can drive!"
 *
 */
#include <iostream>

using namespace std;

int main() {
    int user_age {};
   bool has_car {};

    cout << "Tell me your age and if you own a car  to know, if you can drive? age, true or false" << endl;
    cout << ": ";
    cin >> user_age >> has_car;

    if(user_age >= 16){
        if(has_car){
            cout << "Yes - you can drive!";
        }else {
            cout << "Sorry, you need to buy a car before you can drive!";
        }
    }else{
        cout << "Sorry, come back in " << 16 - user_age << " years and be sure you own a car when you come back.";
    }


}