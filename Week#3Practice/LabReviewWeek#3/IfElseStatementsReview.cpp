

#include <iostream>
using namespace std;


int main() {

    int x = 10;

    if (x > 50) {
        cout << to_string(x) + " is greater than 50" << endl;
    }
    else {
        cout << to_string(x) + " is less than 50" << endl;
    }

    return 0;

}