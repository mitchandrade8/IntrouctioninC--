

#include <iostream>
using namespace std;

int main() {

    string s;

    while (true) {
        cout << "Enter a lowercase vowel." << endl;
        cin >> s;
        if (s=="a" || s=="e" || s=="i" || s=="o" || s=="u") {
            cout << "You successfully entered a vowel." << endl;
        }
        else {
            cout << "You did not enter a vowel." << endl;
            break;
        }
    }

    return 0;

}