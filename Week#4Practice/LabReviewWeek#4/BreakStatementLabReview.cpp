

#include <iostream>
using namespace std;


int main() {

    double result = 0;
    double input;

    while (true) {
        cout << "Enter a number to add to sum. "; 
        cout << "Or enter a non-number to quit and calculate sum." << endl;
        cin >> input;
        if (cin.good()) {
            result += input;
        }
        if (cin.fail()) {
            cout << "Sum = " << result << endl;
            break;
        }
    }

    return 0;

}