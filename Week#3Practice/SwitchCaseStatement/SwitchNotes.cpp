
#include <iostream>
using namespace std;

// MARK: - Overview

    // The Switch Statement:
    /// The switch case statement is a way to make a decision with multiple possible outcomes. Instead of nesting or 
    /// sequencing many if statements, C++ allows you to write the following:

    // Example:

int main() {

    int dayOfWeek = 3;
    switch (dayOfWeek) {
        case 1: cout << "Sunday";
            break;
        case 2: cout << "Monday";
            break;
        case 3: cout << "Tuesday";
            break;
        case 4: cout << "Wednesday";
            break;
        case 5: cout << "Thursday";
            break;
        case 6: cout << "Friday";
            break;
        case 7: cout << "Saturday";
            break;
        default: cout << "Invalid";
    }

    return 0;
}    