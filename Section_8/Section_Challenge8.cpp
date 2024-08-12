//Section 8 Challenge
/*
 * For this program I will be using US dollars and cents.
 *
 * Write a program that asks the user to enter the following:
 * An integer representing the number of cents
 *
 * You may assume that the number of cents entered is greater than or equal to zero
 *
 * The program should then display how to provide the change to user.
 *
 * In the US:
 *  1 dollar is 100 cents
 *  1 quarter is 25 cents
 *  1 dime is 10 cents
 *  1 nickel is 5 cents, and
 *  1 penny is 1 cent.
 *
 *
 *  Here is a simple run:
 *
 *      You can provide this change as follows:
 *      dollars : 0
 *      quarters: 3
 *      dimes   : 1
 *      nickels : 1
 *      pennies : 2
 *
 *      Feel free to use your own currency system.
 *      Also, think of how you might solve the problem using the modulo operator.
 */
#include <iostream>

using namespace std;

int main(){

    //Variable to store user input.
    int cents {};
    int dollars {};
    int quarters {};
    int dimes {};
    int nickels {};
    int pennies {};
    int newamount {};

    //Asking the user to enter the amount of money.
    cout << "Enter the amount cents: ";
    cin >> cents;

    //output display
    cout << "You can provide change for this change as follows: " << endl;

    //dollars amount
    dollars = cents / 100;
    cout << "dollars: " << dollars << endl;
    newamount = cents % 100;

    //quarter amount
    quarters = newamount / 25;
    cout << "quarters: " << quarters << endl;
    newamount %= 25;

    //dime amount
    dimes = newamount / 10;
    cout << "dimes: " << dimes << endl;
    newamount = newamount % 10;

    //nickels amount
    nickels = newamount / 5;
    cout << "nickels: " << nickels << endl;
    newamount = newamount % 5;

    //pennies amount
    pennies = newamount;
    cout << "pennies: " << pennies << endl;


    cout << endl;
    return 0;
}