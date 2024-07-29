//Section 6
//Challenge

/*
 * Frank's Carpet Cleaning Service
 * Charges:
 *  $25 per small room
 *  $35 per large room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 *
 * Prompt the user for the number of small and large rooms they would like cleaned and
 * provide an estimate such as:
 *
 * Estimate for carpet cleaning service
 * Number of small rooms: 3
 * Number of large rooms: 1
 * Price per small room: $25
 * Price per large room: $35
 * Cost: $110
 * Tax: $6.6
 * ============================
 * Total estimate: $116.6
 * This estimate is valid for 30 days
 */

#include <iostream>

using namespace std;

int main() {
    //intro.
    cout << "Hello, welcome to Frank's  Carpet Cleaning Service." << endl;

    //user input for large rooms.
    double large_rooms {0};
    cout << "How many large rooms would you like to be clean: ";
    cin >> large_rooms;

    //User input for small rooms.
    double small_rooms {0};
    cout << "How many small rooms would you like to be clean: ";
    cin >> small_rooms;
    cout << endl;

    cout << "===================================================" << endl;

    //Prices for rooms
    const int large_room_price {35};
    const int small_room_price {25};
    cout << "Price per large room: $" << large_room_price << endl;
    cout << "Price per small room: $" << small_room_price << endl;

    // cost and tax
    const double sale_tax {.06};
    double total_cost = (large_room_price * large_rooms) +(small_room_price * small_rooms);
    cout << "Cost: $" << total_cost << endl;
    cout << "Tax: $" << total_cost * sale_tax << endl;

    cout << "===================================================" << endl;

    //Total estimate and vality
    const int validity {30};
    cout << "Total estimate: $" << total_cost + (total_cost * sale_tax) << endl;
    cout << "This estimate is valid for " << validity << " days." << endl;

    return 0;



}