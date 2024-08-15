/* In this exercise you will use an simple "if/else" statement to decide if someone can drive.
 * Let's assume that anyone 16 or older can legally drive.
 *
 * If the person can legally drive, your program should display, "Yes - you can drive!"
 *
 * If the person cannot legally drive, then you program should display, "Sorry, come back in n years",
 * where n is how many years until the person turns 16 year old.
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

    if (user_age >= minimal_age_to_drive){
        cout << "Yes - you can drive\n";
    } else {
        cout << "Sorry, come back in " << minimal_age_to_drive - user_age << " years."  << endl;

    }

}