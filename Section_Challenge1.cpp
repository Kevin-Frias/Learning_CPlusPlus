/* Task: Create a C++ program that asks the user for their favoirte number between 1 and 100
 * then read this number from the console.
 */
#include <iostream>

int main() {
    int favorite_number;
    std::cout << " What is your favoirte number between 1 and 100: ";

    std::cin >> favorite_number;

    std::cout << "Amazing!! That's my favorite number too!" << std::endl;

    std::cout << "No really " << favorite_number << " is my favorite number!" << std::endl;

    return 0;
}