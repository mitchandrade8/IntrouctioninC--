
#include <iostream>
using namespace std;

int main() {

    int grade = 62;
    if (grade < 60) {
        cout << "F" << endl; }
    else if (grade < 70) {
        cout << "D" << endl; }
    else if (grade < 80) {
        cout << "C" << endl; }
    else if (grade < 90) {
        cout << "B" << endl; }
    else if (grade <= 100) {
        cout << "A" << endl; }


    return 0;

}