

#include <iostream>
using namespace std;

int main() {

    for (int line = 1; line <= 12; line++) {
        for (int num = 1; num <= line; num++) {
            cout << num << " ";
        }
        cout << "" << endl;
    }


    return 0;

}