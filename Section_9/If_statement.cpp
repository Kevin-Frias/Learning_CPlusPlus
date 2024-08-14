//Section 9
//if statement

#include <iostream>

using namespace std;

int main() {

    int num {};
    const int min {10};
    const int max {100};

    cout << "\nEnter a number between " << min << " and " << max << ": ";
    cin >> num;

    if ( num >= min){
        cout <<"\n=====================if statement 1 ======================" << endl;
        cout << num <<  " is greater than " << min << endl;


        int diff {num - min};
        cout << num << " is " << diff << " greater than or equal to " << min << endl;

    }


    if ( num <= max){
        cout <<"\n=====================if statement 2 ======================" << endl;
        cout << num << " is less than or equal to " << max << endl;

        int diff {max - num};
        cout << num << " is " << diff << " less than or euqal to " << max << endl;
    }


    if( num >= min && num <= max){
        cout <<"\n=====================if statement 3 ======================" << endl;
        cout << num << " is in range " << endl;
        cout << "This means statement 1 and 2 must also display!!" << endl;

    }

    if( num == min || num == max){
        cout <<"\n=====================if statement 4 ======================" << endl;
        cout << num << " is right on a boundary " << endl;
        cout << "all four statements fire!" << endl;

    }

    cout << endl;
    return 0;
}