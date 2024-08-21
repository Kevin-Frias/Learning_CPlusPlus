#include <iostream>

using namespace std;

int main(){

    int sum {};

    for(int i {1}; i <= 15; ++i){
        if(i % 2 != 0){
            sum += i;
        }

    }


    cout << endl;
    return 0;
}