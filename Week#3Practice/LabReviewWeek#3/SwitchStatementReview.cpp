

#include <iostream>
using namespace std;


int main() {

    int size = 3;

    switch (size) {
        case 1: cout << "Short"; 
            break;
        case 2: cout << "Tall"; 
            break;
        case 3: cout << "Grande"; 
            break;
        case 4: cout << "Venti"; 
            break;
        case 5: cout << "Trenta"; 
            break;
        default: cout << "Grande";
    }

    return 0;

}