
#include <iostream>
using namespace std;

int main() {

    int grade = 62;
    int letterGrade = grade / 10;
    switch (letterGrade) {
        case 10: case 9: cout << "A"; 
            break;
        case 8: cout << "B"; 
            break;
        case 7: cout << "C"; 
            break;
        case 6: cout << "D"; 
            break;
        default: cout << "F";
    }

    return 0;

}