/*In this exercise you will write a program that uses arithmetic operators to manipulate an
integer number that is provided to you.


Use the multiplication operator  *  to double  the value of the variable  number and store the result back in number .

Use the addition operator  +  to add 9  to the variable  number  and store the result back in number .

Use the subtraction operator  -  to subtract 3  from the variable number  and store the result back in number .new value.

Use the division operator  /  to divide the variable number  by 2   and store the result back in number .

Use the modulo operator  %  to find the remainder of the new value when divided by 3  and store the result back in number .
*/
#include <iostream>
#include <random>
using namespace std;

int main(){

   random_device  rd;
   uniform_int_distribution <int> ud(1, 10);
   int number = ud(rd);

    //Multiply number by 2 and assign the result back to number
        // cout << "The random number before arithmetic operator is: " << number << endl;
        // number = number * 2;
        // cout << "\nMultiplying number by 2 is: " << number << endl;

    //Add 9 to number and assign the result back to number
       // cout << "The random number before arithmetic operator is: " << number << endl;
       // number = number + 9;
       // cout << "\nAdding 9 to number is: " << endl;

    //Subtract 3 from number and assign the result back to number
       // cout << "The random number before arithmetic operator is: " << number << endl;
       // number = number - 3;
       // cout << "\nSubtracting 3 from number is: " << number << endl;

    //Divide number by 2 and assign the result back to number
        //cout << "The random number before arithmetic operator is: " << number << endl;
        // number = number / 2;
        //cout << "\nThe division of number by 2 is: " << number << endl;

    //Take the modulues 3 (%) of number and assign it back to number
        cout << "The random number before arithmetic operator is: " << number << endl;
        number = number % 3;
        cout << "\nThe module of number by 3 is: " << number << endl;


    return 0;
}