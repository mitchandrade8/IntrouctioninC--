
#include <iostream>

using namespace std;

int main() {

    string num1;
    string num2;
    cout << "Type the first whole number and then press Enter or Return: ";
    cin >> num1;
    cout << "Type the second whole number and then press Enter or Return: ";
    cin >>num2;
  
    //fix the code below this line

    string sum = num1 + num2;
    cout << ( stoi(num1) + stoi(num2) ) << endl;

    return 0;

}

// MARK: - Codio Solution:
    // Solution #1:
        /* int sum = stoi(num1) + stoi(num2);
        cout << ( num1 + " + " + num2 + " = " + to_string(sum) ) << endl;
        */

    // Solution #2:
        /* int sum = stoi(num1) + stoi(num2);
        cout << ( num1 + " + " + num2 + " = " ) << sum << endl;
        */