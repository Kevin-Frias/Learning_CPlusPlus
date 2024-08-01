//Section 7 Challange
#include <iostream>
#include <vector>

using namespace std;

int main() {

    //Declare 2 empty vectors of integers named vector1 and vector2, respectively
    vector <int> vector1 {};
    vector <int> vector2 {};


    cout << "\nAdd 10 and 20 to vector1 dynamically using push_back\n";
    cout << "\nDisplay the elements in vector1 using the at() method as well as its size using the size() method\n";

    vector1.push_back(10);
    vector1.push_back(20);

    cout <<"\nvector1:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() << " elements." << endl;


     cout << "\nAdd 100 and 200 to vector2 Dynamically using push_back\n";
     cout << "\nDisplay the elements in vector2 using the at() method as well as its size using the size() method\n";


    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nvector2: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "vector2 contains " << vector2.size() << " elements." << endl;


     cout << "\nDeclare an empty 2D vector called vector_2d\n";
     cout << "\nRemember, that a 2D vector is a vector of vector <int>\n";

    vector <vector <int>> vector_2d;

     cout << "\nAdd vector 1 to vector_2d dynamically using push_back\n";
     cout << "\nAdd vector 2 to vector_2d dynamically using push_back\n";

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "\nDisplay the elements in vector_2d using the at() method\n";


    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) <<endl;
    cout << vector_2d.at(1).at(1) << " " << vector_2d.at(1).at(1) << endl;

    cout << "\nChange vector1.at(0) to 1000\n";

    vector1.at(0) = 1000;
    cout << vector1.at(0) << endl;

    cout << "\nDisplay the elements in vector_2d using hte at() method:\n";

    cout << "\nvector_2d:" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(1) << " " << vector_2d.at(1).at(1) <<endl;

    cout <<"\nDisplay teh elements in vector1:\n";

    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;


}