
#include <iostream>
using namespace std;

int main() {

    int num = 16;

    if (num % 2 == 0 && num > 10) {
        cout << "Even and greater than 10" << endl;
    }   

    return 0;

}

// Why use this?:
    // Better to have a 'Compound Conditional Statement' vs a 'Nested If Statement'

// Examples: 

    // Nested If Statement:
    /* int my_var = 19;

    if (my_var > 15) {
        if (my_var < 20) {
            cout << my_var << endl;
        }
    }
    */

   // Compound Conditional Statement:
    /* int my_var = 19;

    if (my_var > 15 && my_var < 20) {
        cout << my_var << endl;
    }
    */