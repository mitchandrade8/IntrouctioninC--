

#include <iostream>
using namespace std;

int main() {

    for ( int x = 0; x < 11; x++) {
        if (x % 2 == 0) {
            cout << "Even" << endl;
        }
        else {
            cout << "Odd" << endl;
        }
    }

    return 0;

}