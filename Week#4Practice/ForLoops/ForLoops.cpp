

#include <iostream>
using namespace std;

int main() {

    // Old Inefficient Code: 
    
    /* 
    cout << "Hello" << endl;
    cout << "Hello" << endl;
    cout << "Hello" << endl;
    cout << "Hello" << endl;
    cout << "Hello" << endl;
    */

   // Refined/Refactored code to be efficient:

    for (int i = 0; i < 5; i++) {
        cout << "Hello" << endl;
    }

    return 0;

}