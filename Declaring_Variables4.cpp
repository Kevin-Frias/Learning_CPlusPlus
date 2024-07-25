/*You must declare a total of THREE variables,
each of a different type, to represent the employee's name, age, and hourly_wage.
age  should be an int,hourly_wage  should be a double , and
name  should be a string. You must initialize the hourly_wage to 23.50.
 */


#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    double hourly_wage = 23.50;
    string name;

    cin >> name >> age;

    cout << name << ' ' <<  age << ' ' << hourly_wage;
}