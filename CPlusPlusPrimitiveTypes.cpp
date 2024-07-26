//Section 6
// Primitive Type

#include <iostream>

using namespace std;

int main (){
    /*
     * Character type
     */
    char middle_initital = 'J'; //Notive the single quotes around characters
    cout << "My middle intial is " << middle_initital << endl;
    /*
     * Integer types
     */
    unsigned short int exam_score  = 55;
    cout << "My exam score was " << exam_score << endl;

    int countries_represneted = 65;
    cout << "There were " << countries_represneted << " countries represnted in my meeting" << endl;

    long people_in_florida {20610000};
    cout << "There are about " << people_in_florida << " people in Florida" << endl;

    long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << " poeple on earth" << endl;

    long long distance_to_sun {94'000'000'000};
    cout << "Earth is " << distance_to_sun << " miles away from the sun" << endl;

    /*
     * Floating point types
     */
    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;

    double pi {3.14159};
    cout << "Pi is " << pi << endl;

    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number" << endl;

    /*
     * Boolean type
     */
    bool gameOver {false};
    cout << "The value of gameOver is " << gameOver << endl;

    /*
     * Overflow example
     */
    short value1 {3000};
    short value2 {1000};
    long product = value1 * value2;

    cout << "The sum of " << value1 << " and " << value2 << " is " << product << endl;



    cout << sizeof(long);


}