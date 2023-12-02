

#include <iostream>
using namespace std;

int main() {

    for (int row = 0; row < 10; row++) { //outer loop
        for (int col = 0; col < 10; col++) { //inner loop
            cout << "#";
        }
        cout << "" << endl; //adds new line
    }
    
    return 0;
    
}