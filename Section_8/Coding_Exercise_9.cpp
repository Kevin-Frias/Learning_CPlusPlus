/*
    In this exercise you will create a program that determines the eligibility of an individual applying for a job as a delivery driver.
    In order for the individual to be eligible, they must be 18  years of age or older,
    or be above the age of  15  and have their parents consent to work.
    Additionally, they must possess a valid social security number and have no driving accidents.

    Let the variable age  represent the individual's age,
    and the boolean variables parental_consent  represent parental consent,
    ssn  represent a valid social security number,
    and accidents   represent whether they have had any car accidents.
 */
#include <iostream>

using namespace std;

int main(){
    //variable for individual's age.
    int age {15};
    //variable for parents consent.
    bool parental_consent {};
    //variable for social security number.
    bool ssn{true};
    //variable for any car accidents.
    bool accidents {false};

    if (((age >= 18) || (age >= 16 && parental_consent == true)) && ssn == true && !accidents)
        cout << "Yes, you can work." << endl;


}