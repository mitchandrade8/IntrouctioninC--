
#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i < 6; i++) {
        for (int j = 5 - i; j > 0; j--) {
            cout << ".";
        }
        cout << i << endl;
    }

    return 0;

}