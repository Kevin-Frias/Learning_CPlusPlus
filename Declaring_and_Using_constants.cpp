//constants
/*
 *Frank's Carpet Cleaning Service
 * Charges $30 per room
 * Sales Tax rate is %6
 *  Estimates are valid for 30 days
 *
 *  Prompt the user for the number of room they would like cleaned
 *  and provide and estimate such as:
 *
 *  Estimate for carpet cleaning service:
 *  Number of rooms: 2
 *  Price per room $30
 *  Cost: $60
 *  Tax: $3.4
 *  ======================================
 *  Total estimate $63.6
 *  This estimate is valid for 30 days
 *
 *
 * Pseudocode:
 *  Prompt the user to enter the number of rooms
 *  Display number of rooms
 *  Display price per room
 *
 *  Diplay cost: (number of rooms * price per room)
 *  Display tax: number of rooms * price per room * tax rate
 *  Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
 *  Display estimate expiration time
 */
#include <iostream>
using namespace std;

int main() {
    int number_of_rooms = 0;

    int const price_per_room {30};
    int tax = total_cost
    int  total_cost_per_room  = number_of_rooms * price_per_room;

    //Display the price per room
    cout << "Price per room $" << price_per_room << endl;

    //Prompting the user to enter the number of rooms.
    cout << "Number of rooms: ";
    cin >> number_of_rooms;
    cout << number_of_rooms;

    //Displaying the total_cost_per_room
    cout <<"Cost: $" << total_cost_per_room << endl;






}